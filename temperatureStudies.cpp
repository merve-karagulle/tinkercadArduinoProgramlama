//LCD ekrana sýcaklýk deðer yazdýrma projesi
#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
int sicaklik;
int sicaklikPin=A0;
void setup(){
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop(){
  sicaklik=((analogRead(sicaklikPin)*4.88)-500)/10;
  //4.88 yazdýðýmýzda votaj deðeri olduðu için yakýn hesaplama için
  //4.88 yazýlmaktadýr.
  //gerçekte 5V olarak yazýlmaktadýr.
  lcd.setCursor(0,0);
  lcd.print("sicaklik ");
  lcd.setCursor(6,1);
  lcd.print(sicaklik);
  
  Serial.print(sicaklik);
  Serial.println("C");
  delay(500);
}
//Yangýn alarmý projesi
int buzzerPin=6;
int sicaklik;
int sicaklikPin=A0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  sicaklik=((analogRead(sicaklikPin)*4.88)-500)/10;
  Serial.println(sicaklik);
  if(sicaklik>35){
    tone(buzzerPin,400);
  }else{
    noTone(buzzerPin);
  }
}
//Sýcaklýk deðerlerine göre Led yakma projesi
int kirmizi=8;
int yesil=9;
int mavi=10;
int sicaklik;
int sicaklikPin=A0;

void setup(){
  pinMode(mavi,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  sicaklik=((analogRead(sicaklikPin)*4.88)-500)/10;
  Serial.print("sicaklik= ");
  Serial.println(sicaklik);
  if(sicaklik<20){
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(mavi,HIGH);
  }
   else if(sicaklik<30 &&sicaklik>=20){
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,HIGH);
    digitalWrite(mavi,LOW);
  }
   else if(sicaklik<70 &&sicaklik>=30){
    digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,LOW);
    digitalWrite(mavi,LOW);
  }
   else if(sicaklik<100 &&sicaklik>=70){
    digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,LOW);
    digitalWrite(mavi,HIGH);
   }else{
     digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,HIGH);
    digitalWrite(mavi,HIGH);
   }
}
    
    
    
    

    
  
