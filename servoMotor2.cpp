//Servo motoru potansiyometre ile �al��t�rma projesi

#include<Servo.h>

Servo motor;
int pot=A0;
int potdeger;
void setup()
{
  motor.attach(9);
  Serial.begin(9600);//Serial monit�r kap�s�d�r.
}

void loop()
{
 potdeger=analogRead(pot);
 potdeger=map(potdeger,0,1023,0,180);
  //potansiyometre 0 ile 1023 aras�nda,servo motor 0 ile 180 derece 
  //aras�nda �al��abilmektedir.Bu y�zden map fonksiyonu kullan�l�r.
  //map() fonksiyonu, bir de�eri belirli bir aral�ktan 
  //ba�ka bir aral��a d�n��t�rmek i�in kullan�l�r.
 motor.write(potdeger);
 Serial.println(potdeger);
 delay(15);
  
}

