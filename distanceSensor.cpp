
//Mesafe sensör kullaným projesi(3 ayaklý)
float santimetre;
int sure;
int trigPin=8;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pinMode(trigPin,OUTPUT);//Sinyali yollamak için output
   digitalWrite(trigPin, LOW);
  //gerçek mesafe sensörü 4 bacaklýdýr.diðer açlýþmada bahsedeceðim.
  //bir tane de echo bacaðý bulunmaktadýr.
  //bir bacaðýný da echoPin olarak alýrýz.
  //echoPin kýsmýný INPUT alýrýz.
  //bir bacaktan giriþ
  //diðer bacaktan çýkýþ olur
  //ama burada ayný bacaðý hem giriþ hem çýkýþ olarak alacaðýz.
  //bu yüzden ayný bacak hem ýnput hem output olacaktýr.
  
  delayMicroseconds(2); //2 mikro saniye bekler.
  
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  pinMode(trigPin,INPUT);//sinyalleri almak için ýnput 
  
  sure=pulseIn(trigPin,HIGH);
  
  /* pin üzerindeki deðer hýgh ise  bu deðer low olana kadar bekler 
  ve darbenin mikrosaniye cinsinden deðerini verir*/
  santimetre=(sure/2)/29.1;
  //uzunluða çevrilme formülü
  //gerçekte 29.1 olarak alýnmakatdýr.
  Serial.print(santimetre);
  Serial.println("cm");

  delay(100); 
}

//Mesafe sensör kullaným projesi(4 ayaklý)
int sure;
int santimetre;
int trigPin=7;
int echoPin=8;
void setup()
{
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  //TRIG (Tetikleme pini) › Çýkýþ (OUTPUT) olmalý.
  //ECHO (Yanýt pini) › Giriþ (INPUT) olmalý.
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  sure=pulseIn(echoPin,HIGH);//trigpin ile sinyali gönderdik
  //echopinle de sinyali geri aldýk.
  //darbe süresini ölçtük.
  santimetre=(sure/2)/29.1;
  Serial.print(santimetre);
  Serial.println("cm");
  delay(100);
}
