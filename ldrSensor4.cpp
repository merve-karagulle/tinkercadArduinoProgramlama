
//Tavus kümesi kapýsý yapým mantýðý projesi
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

//LDR sensör ile ýþýða duyarlý servo motor hareket ettirme projesi
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

//LDR ve buzzer ile alarm yapým projesi 
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
  //loop fonksiyonu içinde de deðiþken tanýmlanabilir.
  Serial.println(deger);
   
  if(deger<250){
    tone(8,440,2000)
      //tone fonksiyonu buzzera ses atamak için kullanýlýr.
      //tone fonksiyonun içindeki ilk kýsým baðlý olduðu pin numarasýdýr.
      //ikinci kýsým buton ses numarasý olmaktadýr.farklý numaralar da girilebilir.
      //üçüncü kýsým ise bu sesin kaç saniye süreceði hakkýndadýr.
      //eðer üçüncü kýsým yazýlmazsa ses hep olur.
  }else{
    noTone(buzzer);//buzzer tonunu kapat demektir.
  }
  delay(10);
}




