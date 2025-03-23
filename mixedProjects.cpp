//otomatik ��p mant��� projesi
#include<Servo.h>
Servo motor;
int santimetre;
int sure;
int trigPin=7;
int echoPin=6;

void setup(){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  motor.attach(9);
  Serial.begin(9600);
  motor.write(0);
}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  santimetre=(sure/2)/29.1;
  Serial.println(santimetre);
  if(santimetre<40){
    motor.write(180);
    delay(1000);
  }else{
    motor.write(0);
    delay(10);
  }
  delay(100);
}


//Pir hareket sens�r�n� kullanarak apartman giri� ��k�� kontrol projesi
//hareket sens�r� pir olarak bilinmektedir.
//hareket oldu�unda bir yani h�gh 
//herhangi bir hareket olmad���nda pir 0 yani low de�erini almaktad�r.
int pirPin=2;
int ledPin=4;
int deger=0;
void setup(){
    pinMode(pirPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}
void loop(){
  deger=digitalRead(pirPin);
  Serial.println(deger);
  if(deger==HIGH){
    digitalWrite(ledPin,HIGH);
    delay(20000);
  }else{
    digitalWrite(ledPin,LOW);
  }
}

//Pir hareket sens�r�n� kullanarak ayn� zamanda ldr  ile ayd�nl�k karanl�k durumuna g�re led yakma projesi
int pirPin=2;
int ledPin=7;
int ldrdeger;
int ldr=A0;
int deger;
void setup(){
  pinMode(pirPin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(ldr,INPUT);
 Serial.begin(9600);
  
}
void loop(){
  deger=digitalRead(pirPin);
  Serial.print("pir degeri=");
   Serial.println(deger);
  Serial.print("ldr degeri=");
  ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  
  if(deger==HIGH && ldrdeger>500){
    digitalWrite(ledPin,HIGH);
    delay(600);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
    
//hareket sens�r� ile servo motor kontrol projesi
#include<Servo.h>
Servo motor;
int pirPin=2;
int deger=0;
void setup(){
  Serial.begin(9600);
  motor.attach(9);
  pinMode(pirPin,INPUT);
}
void loop(){
  motor.write(0);
  //her ba�lang��ta s�f�r konumuna gelsin.
  deger=digitalRead(pirPin);
  Serial.println(deger);
  if(deger==HIGH){
    motor.write(180);
   delay(5000);
  }
}
  
    
  
  
  
  
  
