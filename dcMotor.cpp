//Bir adet dc motor kullan�m projesi 

//bu zamana kadar servo motor ile ilerledik
//servo motor sadece 180 derece d�nebiliyorken dc motor ile b�y�k �al��malar yapabiliriz.
//pil ba�lamam�z�n nedeni motor s�r�c�m�z g�c�n� pilden al�yor.
#define m1 2//2 numaral� pin sa�a d�nd�r�r

#define m2 3 //3 numaral� pin sola d�nd�r�r
void setup(){
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);//�IKI� OLARAK ALINIR.
}
void loop()
{
  digitalWrite(m1,HIGH);//m1 i �al��t�r.
  digitalWrite(m2,LOW);//m2 i �al��t�rma.
  delay(2000);
   digitalWrite(m1,LOW);//sa� sol d�nd�rme mant���d�r.
  digitalWrite(m2,HIGH);
  delay(2000);
}
  

  

//�ki tane dc motor kullan�m projesi 
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

 
 
  
