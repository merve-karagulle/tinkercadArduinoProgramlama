
//6 Adet servo motor ile çalýþma projesi
#include<Servo.h>

Servo servomotor1;
Servo servomotor2;
Servo servomotor3;
Servo servomotor4;
Servo servomotor5;
Servo servomotor6;
int aci=0;

void setup()
{
   servomotor1.attach(3);
   servomotor2.attach(5);
   servomotor3.attach(6);
   servomotor4.attach(9);
   servomotor5.attach(10);
   servomotor6.attach(11);
}

void loop()
{
  for(aci=0;aci<=180;aci++){
     servomotor1.write(aci);
     servomotor2.write(aci);
     servomotor3.write(aci);
     servomotor4.write(aci);
     servomotor5.write(aci);
     servomotor6.write(aci);
     delay(15);
  }  
  for(aci=180;aci>=180;aci--){
     servomotor1.write(aci);
     servomotor2.write(aci);
     servomotor3.write(aci);
     servomotor4.write(aci);
     servomotor5.write(aci);
     servomotor6.write(aci);
     delay(15);
  }
}
//3 Tane Potansiyometre Ýle 3 Servo Motor Kontrolü (Robot Kol) Çalýþmasý

Servo motor1; // Servo nesnelerini tanýmla
Servo motor2;
Servo motor3;

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int potdeger1;
int potdeger2;
int potdeger3;

void setup() {
    motor1.attach(3);
    motor2.attach(5);
    motor3.attach(6);
}

void loop() {
    potdeger1 = analogRead(pot1);
    potdeger1 = map(potdeger1, 0, 1023, 0, 180);
    motor1.write(potdeger1);

    potdeger2 = analogRead(pot2);
    potdeger2 = map(potdeger2, 0, 1023, 0, 180);
    motor2.write(potdeger2);

    potdeger3 = analogRead(pot3);
    potdeger3 = map(potdeger3, 0, 1023, 0, 180);
    motor3.write(potdeger3);

    delay(10);
}

//Servo motor mantýðý ile hafýzalý robot kol  çalýþmasý

#include<Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;

const int LED1=2;
const int LED2=3;
const int LED3=4;
const int LED4=5;
const int LED5=6;

const int buton1=12;
const int buton2=13;

int buton1deger=0;
boolean buton2deger=false;//ayný ifade.

const int pot1=A0;
const int pot2=A1;
const int pot3=A2;

int pot1deger;
int pot2deger;
int pot3deger;

int pot1aci;
int pot2aci;
int pot3aci;


int motor1PosKayit[]={1,1,1,1,1};//dizi tanýmý yapýldý.
int motor2PosKayit[]={1,1,1,1,1};//daha sonrasýnda dizi elemanlarý deðiþecek.
int motor3PosKayit[]={1,1,1,1,1};

void setup()
{
   motor1.attach(9);
   motor2.attach(10);
   motor3.attach(11);
  
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
   pinMode(LED3,OUTPUT);
   pinMode(LED4,OUTPUT);
   pinMode(LED5,OUTPUT);
   pinMode(buton1,INPUT);
   pinMode(buton2,INPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  pot1deger=analogRead(pot1);
  pot1aci=map(pot1deger,0,1023,0,180);
  
  pot2deger=analogRead(pot2);
  pot2aci=map(pot2deger,0,1023,0,180);
  
  pot3deger=analogRead(pot3);
  pot3aci=map(pot3deger,0,1023,0,180);
  
  motor1.write(pot1aci);
  motor2.write(pot2aci);
  motor3.write(pot3aci);
  
  if(digitalRead(buton1)==HIGH){
    buton1deger++;
    switch(buton1deger){
      case 1:
           motor1PosKayit[0]=pot1aci;
           motor2PosKayit[0]=pot2aci;
           motor3PosKayit[0]=pot3aci;
           digitalWrite(LED1,HIGH);
           Serial.println("Pos 1 kayit");
           break;
     case 2:
           motor1PosKayit[1]=pot1aci;
           motor2PosKayit[1]=pot2aci;
           motor3PosKayit[1]=pot3aci;
           digitalWrite(LED2,HIGH);
           Serial.println("Pos 2 kayit");
           break;
       case 3:
           motor1PosKayit[2]=pot1aci;
           motor2PosKayit[2]=pot2aci;
           motor3PosKayit[2]=pot3aci;
           digitalWrite(LED3,HIGH);
           Serial.println("Pos 3 kayit");
           break;
       case 4:
           motor1PosKayit[3]=pot1aci;
           motor2PosKayit[3]=pot2aci;
           motor3PosKayit[3]=pot3aci;
           digitalWrite(LED4,HIGH);
           Serial.println("Pos 4 kayit");
           break;
       case 5:
           motor1PosKayit[4]=pot1aci;
           motor2PosKayit[4]=pot2aci;
           motor3PosKayit[4]=pot3aci;
           digitalWrite(LED5,HIGH);
           Serial.println("Pos 5 kayit");
           break;//her casede yazmak gerekmektedir.
    }
  }
  if(digitalRead(buton2)==HIGH){
    buton2deger=true;
  }
  if(buton2deger){
    for(int i=0;i<5;i++){
      motor1.write(motor1PosKayit[i]);
      motor2.write(motor2PosKayit[i]);
      motor3.write(motor3PosKayit[i]);
      Serial.println("Potansiyometre acilari:");
      Serial.println(motor1PosKayit[i]);
      Serial.println(motor2PosKayit[i]);
      Serial.println(motor3PosKayit[i]);
      delay(1000);
    }
  }
  delay(300);
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

