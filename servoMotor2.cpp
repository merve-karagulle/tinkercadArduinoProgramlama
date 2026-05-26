//Servo motoru potansiyometre ile çalýþtýrma projesi

#include<Servo.h>

Servo motor;
int pot=A0;
int potdeger;
void setup()
{
  motor.attach(9);
  Serial.begin(9600);//Serial monitör kapýsýdýr.
}

void loop()
{
 potdeger=analogRead(pot);
 potdeger=map(potdeger,0,1023,0,180);
  //potansiyometre 0 ile 1023 arasýnda,servo motor 0 ile 180 derece 
  //arasýnda çalýþabilmektedir.Bu yüzden map fonksiyonu kullanýlýr.
  //map() fonksiyonu, bir deðeri belirli bir aralýktan 
  //baþka bir aralýða dönüþtürmek için kullanýlýr.
 motor.write(potdeger);
 Serial.println(potdeger);
 delay(15);
  
}

