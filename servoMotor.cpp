//servo motor ile ilgili genel açıklamalar
/*servo motorun signal ucunu 9 10 11 dijital pinlerine veya 
3 5 6 dijital pinlerine bağlayabiliriz.*/

#include<Servo.h>
//motoru kütüphaneden çağırıyoruz.
Servo sg90;
//servoda sg90 isimli nesne oluşturduk.
void setup()
{
  sg90.attach(9);
  /*servo motoru hangi pine bağladığımızı yazıyor ve
  motoru başlatıyoruz.*/
}

void loop()
{
  sg90.write(178);
  //sg90 isimli nesnemizi kaç derece döndüreceğimizi belirliyoruz.
  //servo motor plastik kanatlardan oluşmaktadır.
  //servo motor dönme açısını en fazla 180 derece yapabilmektedir.
  //180 den büyük dönme açısı girildiğinde hata oluşmaktadır.
}

//Servo motoru sürekli çalıştırma projesi
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
