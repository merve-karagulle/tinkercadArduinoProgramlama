
//Mesafe sens�r kullan�m projesi(3 ayakl�)
float santimetre;
int sure;
int trigPin=8;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pinMode(trigPin,OUTPUT);//Sinyali yollamak i�in output
   digitalWrite(trigPin, LOW);
  //ger�ek mesafe sens�r� 4 bacakl�d�r.di�er a�l��mada bahsedece�im.
  //bir tane de echo baca�� bulunmaktad�r.
  //bir baca��n� da echoPin olarak al�r�z.
  //echoPin k�sm�n� INPUT al�r�z.
  //bir bacaktan giri�
  //di�er bacaktan ��k�� olur
  //ama burada ayn� baca�� hem giri� hem ��k�� olarak alaca��z.
  //bu y�zden ayn� bacak hem �nput hem output olacakt�r.
  
  delayMicroseconds(2); //2 mikro saniye bekler.
  
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  pinMode(trigPin,INPUT);//sinyalleri almak i�in �nput 
  
  sure=pulseIn(trigPin,HIGH);
  
  /* pin �zerindeki de�er h�gh ise  bu de�er low olana kadar bekler 
  ve darbenin mikrosaniye cinsinden de�erini verir*/
  santimetre=(sure/2)/29.1;
  //uzunlu�a �evrilme form�l�
  //ger�ekte 29.1 olarak al�nmakatd�r.
  Serial.print(santimetre);
  Serial.println("cm");

  delay(100); 
}

//Mesafe sens�r kullan�m projesi(4 ayakl�)
int sure;
int santimetre;
int trigPin=7;
int echoPin=8;
void setup()
{
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  //TRIG (Tetikleme pini) � ��k�� (OUTPUT) olmal�.
  //ECHO (Yan�t pini) � Giri� (INPUT) olmal�.
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure=pulseIn(echoPin,HIGH);//trigpin ile sinyali g�nderdik
  //echopinle de sinyali geri ald�k.
  //darbe s�resini �l�t�k.
  santimetre=(sure/2)/29.1;
  Serial.print(santimetre);
  Serial.println("cm");
  delay(100);
}
