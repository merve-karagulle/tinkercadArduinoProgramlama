
//Tavus k�mesi kap�s� yap�m mant��� projesi
#include<Servo.h>
Servo motor;
int ldr=A0;
int ldrdeger;
int aydinlikdegeri=400;
int aci=0;

void setup()
{
 motor.attach(13);
 Serial.begin(9600);
 pinMode(ldr,INPUT);
 motor.write(aci);
  
}

void loop()
{
  ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  if(ldrdeger<aydinlikdegeri){
    motor.write(180);
    delay(300);
  }else{
    motor.write(0);
    delay(300);
  }
    
}

//LDR sens�r ile ����a duyarl� servo motor hareket ettirme projesi
#include<Servo.h>
Servo motor;
int ldr=A0;
int ldrdeger;
int aci=0;

void setup()
{
  motor.attach(9);
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  motor.write(aci);
  
 }

void loop()
{
  ldrdeger=map(analogRead(ldr),0,1023,0,180);
  Serial.println(ldrdeger);
  motor.write(ldrdeger);
  delay(15);
  
}

//LDR ve buzzer ile alarm yap�m projesi 
int buzzer=8;
int ldr=A0;

void setup()
{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int deger=analogRead(ldr);
  //loop fonksiyonu i�inde de de�i�ken tan�mlanabilir.
  Serial.println(deger);
   
  if(deger<250){
    tone(8,440,2000)
      //tone fonksiyonu buzzera ses atamak i�in kullan�l�r.
      //tone fonksiyonun i�indeki ilk k�s�m ba�l� oldu�u pin numaras�d�r.
      //ikinci k�s�m buton ses numaras� olmaktad�r.farkl� numaralar da girilebilir.
      //���nc� k�s�m ise bu sesin ka� saniye s�rece�i hakk�ndad�r.
      //e�er ���nc� k�s�m yaz�lmazsa ses hep olur.
  }else{
    noTone(buzzer);//buzzer tonunu kapat demektir.
  }
  delay(10);
}




