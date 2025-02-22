
//Bir tane led yakma projesi
void setup()//ilk giriş fonksiyonudur.
{
  pinMode(11, OUTPUT);//11 nolu dijital pinden elektrik çıkışı yaptırır.
}

void loop()//döngüye giren fonksiyondur.
{
  digitalWrite(11, HIGH);//Ledi yak.
  delay(1000); // işlem geciktirmesi yapar.(milisaniye)
  digitalWrite(11, LOW);//Ledi söndür.
  delay(1000); // işlem geciktirmesi yapar.(milisaniye)
}

//Sırasıyla İki Led Yakma Projesi
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);//Bir led yandı.
  digitalWrite(5,LOW);//Bir led söndü.
  delay(2000); 
  digitalWrite(8, LOW);
  digitalWrite(5,HIGH);//Görevler değişti.
  delay(2000); 
}


//Sırasıyla Üç Led Yakma Projesi
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(1,OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(1, LOW);
  delay(2000);
  
  digitalWrite(12, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(1, LOW);
  delay(2000);
  
  digitalWrite(12, LOW);
  digitalWrite(7, LOW);
  digitalWrite(1, HIGH);
  delay(2000);
  
}

//Kara Şimşek Projesi
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(0, OUTPUT);

}

void loop()
{
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);//İlk başta hepsi kapalı durumdadır.Kodda yazma zorunluluğu yoktur.
  digitalWrite(5, LOW); 
  digitalWrite(0, LOW);
  delay(100);
  
  digitalWrite(10, LOW);//İlk başta açılan led kapatılır.İşlem yapılmayanlar yazılmak zorunda değildir.
  digitalWrite(11, HIGH);
  digitalWrite(5, LOW); 
  digitalWrite(0, LOW);
  delay(100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH); 
  digitalWrite(0, LOW);
  delay(100);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW); 
  digitalWrite(0, HIGH);
  delay(100);
}

//Yayalar ve Araçlar İçin Yanan Ledlerin Projesi
void setup()
{
   pinMode(0, OUTPUT);
   pinMode(1, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(0, HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  
  delay(5000); 
  digitalWrite(0, LOW);
  digitalWrite(1,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(5000); 
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(5000);
  
}