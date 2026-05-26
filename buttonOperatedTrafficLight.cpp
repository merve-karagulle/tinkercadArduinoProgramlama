
//Buton ile trafik lambalarının durumunu değiştirme projesi
int arackirmizi=2;
int aracsari=3;
int aracyesil=4;//araçlar için kırmızı,sarı,yeşil pinleri bağlandı.
int yayakirmizi=7;
int yayayesil=8;//yayalar için kırmızın ve yeşil pinler bağlandı.
int buton=1;//buton dijital pine bağlandı.
int butondurum=0;//buton durumu başta kapalı atandı.

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(1, INPUT);
}

void loop()
{
  butondurum=digitalRead(buton);//butonun durumuna dijital okunan değer atandı.
  if(butondurum==HIGH)//eğer butona basıldıysa HIGH=1
  {
    
     digitalWrite(arackirmizi,LOW);
     digitalWrite(aracsari,LOW);
     digitalWrite(aracyesil,HIGH);
     digitalWrite(yayakirmizi,HIGH);
     digitalWrite(yayayesil,LOW);//araçlar için yeşil,yayalar için kırmızı yanar.
     delay(1000);
    
     digitalWrite(arackirmizi,LOW);
     digitalWrite(aracsari,HIGH);
     digitalWrite(aracyesil,LOW);
     digitalWrite(yayakirmizi,HIGH);
     digitalWrite(yayayesil,LOW);//araçların durmaya hazırlanması için araçlar için sarı,yayalar için kırmızı yanar.
     delay(1500);
    
     digitalWrite(arackirmizi,HIGH);
     digitalWrite(aracsari,LOW);
     digitalWrite(aracyesil,LOW);
     digitalWrite(yayakirmizi,LOW);
     digitalWrite(yayayesil,HIGH);//araçlar için kırmızı,yayalar için yeşil yanar.
     delay(5000);
    
     digitalWrite(arackirmizi,LOW);
     digitalWrite(aracsari,HIGH);
     digitalWrite(aracyesil,LOW);
     digitalWrite(yayakirmizi,HIGH);
     digitalWrite(yayayesil,LOW);//araçlar için sarı, yayalar için kırmızı yanar.
     delay(1500);  
    
  }
  else
  {
    digitalWrite(arackirmizi,LOW);
    digitalWrite(aracsari,LOW);
    digitalWrite(aracyesil,HIGH);
    digitalWrite(yayakirmizi,HIGH);
    digitalWrite(yayayesil,LOW);
    delay(2000);
   }

}