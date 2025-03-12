//servo motor ile ilgili genel a��klamalar
/*servo motorun signal ucunu 9 10 11 dijital pinlerine veya 
3 5 6 dijital pinlerine ba�layabiliriz.*/

#include<Servo.h>
//motoru k�t�phaneden �a��r�yoruz.
Servo sg90;
//servoda sg90 isimli nesne olu�turduk.
void setup()
{
  sg90.attach(9);
  /*servo motoru hangi pine ba�lad���m�z� yaz�yor ve
  motoru ba�lat�yoruz.*/
}

void loop()
{
  sg90.write(178);
  //sg90 isimli nesnemizi ka� derece d�nd�rece�imizi belirliyoruz.
  //servo motor plastik kanatlardan olu�maktad�r.
  //servo motor d�nme a��s�n� en fazla 180 derece yapabilmektedir.
  //180 den b�y�k d�nme a��s� girildi�inde hata olu�maktad�r.
}

//Servo motoru s�rekli �al��t�rma projesi
#include<Servo.h>

Servo motor;
int aci;

void setup()
{
  motor.attach(9);
  Serial.begin(9600);
}

void loop()
{
  for(aci=0;aci<=180;aci++){
    motor.write(aci);
    Serial.println(aci);
    delay(100);
  }
  for(aci=180;aci>=0;aci--){
    motor.write(aci);
    Serial.println(aci);
    delay(100);
  }
}
