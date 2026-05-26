//2 Adet butonun 3 adet LED kontrol etme projesi
   int led1=5;
  int led2=6;
  int led3=7;
  int buton1=2;
  int buton2=4;
  int sayac=0;
  int t=900;//ledler arasýnda sayma süresi 

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(buton2,INPUT);
  pinMode(buton2,INPUT);
}
void saga(){//saða doðru yakma kodu 
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(t);
}
void sola(){//sola doðru yakma kodu 
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(t);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(t);
}
void flash(){//flash modunu açma kodu
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(t);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(t);
}


void loop()
{
  if(digitalRead(buton1)==1)
    sayac=5;
  if(digitalRead(buton2)==1)
    sayac=10;
  if((digitalRead(buton1)==0) and (digitalRead(buton2)==0))
    sayac=15;
  
  if (sayac==5)saga();//sayaç 5 ise saga animasyonuna git
  if (sayac==10)sola();//sayaç 10 ise sola animasyonuna git
  if (sayac==15)flash();//sayaç 15 ise flash animasyonuna git
  
}
