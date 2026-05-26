//Butona basýlan süre ile LED ayarlama projesi
int  buton=2;
int turuncu=5;
int yesil=4;
int kirmizi=3;
int say=0;
int deger=0;
bool islem=false;//mantýksal deðer türü bool'dur.
void setup()
{
  pinMode(turuncu, OUTPUT); 
  pinMode(yesil, OUTPUT);
  pinMode(kirmizi, OUTPUT);
  pinMode(buton, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  deger=digitalRead(buton);
  while(deger==1){
    delay(100);
    say++;
    deger=digitalRead(buton);//tekrar deðer okunmasý yapýlýr.
    islem=true;//amacýmýz sonsuz while döngüsüne girilmesini engellemektir.
   }
  if(islem==true){
    if(say<=5 && say>0){
      digitalWrite(turuncu,HIGH);
      digitalWrite(yesil,LOW);
      digitalWrite(kirmizi,LOW);
    }
   else if(say<=10 && say>5){
      digitalWrite(turuncu,LOW);
      digitalWrite(yesil,HIGH);
      digitalWrite(kirmizi,LOW);
    }
   else if(say<=15 && say>10) {
      digitalWrite(turuncu,LOW);
      digitalWrite(yesil,LOW);
      digitalWrite(kirmizi,HIGH);
    }
    islem=false;
    say=0;
  }
}
