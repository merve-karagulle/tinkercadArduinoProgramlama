//servo motor ile ilgili genel açýklamalar
/*servo motorun signal ucunu 9 10 11 dijital pinlerine veya 
3 5 6 dijital pinlerine baðlayabiliriz.*/

#include<Servo.h>
//motoru kütüphaneden çaðýrýyoruz.
Servo sg90;
//servoda sg90 isimli nesne oluþturduk.
void setup()
{
  sg90.attach(9);
  /*servo motoru hangi pine baðladýðýmýzý yazýyor ve
  motoru baþlatýyoruz.*/
}

void loop()
{
  sg90.write(178);
  //sg90 isimli nesnemizi kaç derece döndüreceðimizi belirliyoruz.
  //servo motor plastik kanatlardan oluþmaktadýr.
  //servo motor dönme açýsýný en fazla 180 derece yapabilmektedir.
  //180 den büyük dönme açýsý girildiðinde hata oluþmaktadýr.
}

//Servo motoru sürekli çalýþtýrma projesi
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
