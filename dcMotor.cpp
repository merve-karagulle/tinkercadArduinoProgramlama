//Bir adet dc motor kullaným projesi 

//bu zamana kadar servo motor ile ilerledik
//servo motor sadece 180 derece dönebiliyorken dc motor ile büyük çalýþmalar yapabiliriz.
//pil baðlamamýzýn nedeni motor sürücümüz gücünü pilden alýyor.
#define m1 2//2 numaralý pin saða döndürür

#define m2 3 //3 numaralý pin sola döndürür
void setup(){
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);//ÇIKIÞ OLARAK ALINIR.
}
void loop()
{
  digitalWrite(m1,HIGH);//m1 i çalýþtýr.
  digitalWrite(m2,LOW);//m2 i çalýþtýrma.
  delay(2000);
   digitalWrite(m1,LOW);//sað sol döndürme mantýðýdýr.
  digitalWrite(m2,HIGH);
  delay(2000);
}
  

  

//Ýki tane dc motor kullaným projesi 
#define m1 2
#define m2 3
#define m3 9
#define m4 10
void setup(){
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
}
void loop(){
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3 ,LOW);
  digitalWrite(m4,LOW);
  delay(2000);
   digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3 ,LOW);
  digitalWrite(m4,LOW);
  delay(2000);
   digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3 ,HIGH);
  digitalWrite(m4,LOW);
  delay(2000);
   digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3 ,LOW);
  digitalWrite(m4,HIGH);
  delay(2000);
}

 
 
  
