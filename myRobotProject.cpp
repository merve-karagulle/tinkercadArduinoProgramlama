/* 3 Doðrusal yönde hareket edebilen ve 8 adet dc motor kullanma projesi
//basit robot çalýþma mantýðý içermektedir
int motor1A = 2;  
int motor1B = 4;  
int motor2A = 7;  
int motor2B = 8;  
int ena1 = 3;     
int enb1 = 5;     

int motor3A = 12; 
int motor3B = 13; 
int motor4A = A0; 
int motor4B = A1; 
int ena2 = 6;     
int enb2 = 9;     

int motor5A = A2; 
int motor5B = A3; 
int motor6A = A4; 
int motor6B = A5; 

int motor7A = 0;  
int motor7B = 1;  
int motor8A = 10; 
int motor8B = 11; 


void setup() {
 
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  pinMode(ena1, OUTPUT);
  pinMode(enb1, OUTPUT);

  pinMode(motor3A, OUTPUT);
  pinMode(motor3B, OUTPUT);
  pinMode(motor4A, OUTPUT);
  pinMode(motor4B, OUTPUT);
  pinMode(ena2, OUTPUT);
  pinMode(enb2, OUTPUT);

  pinMode(motor5A, OUTPUT);
  pinMode(motor5B, OUTPUT);
  pinMode(motor6A, OUTPUT);
  pinMode(motor6B, OUTPUT);

  pinMode(motor7A, OUTPUT);
  pinMode(motor7B, OUTPUT);
  pinMode(motor8A, OUTPUT);
  pinMode(motor8B, OUTPUT);
}

// X ekseni ileri hareket
void xEkseniÝleriHareket(int duration, int speed) {
  analogWrite(ena1, speed);
  analogWrite(enb1, speed);
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
  delay(duration);
}

// X ekseni geri hareket
void xEkseniGeriHareket(int duration, int speed) {
  analogWrite(ena1, speed);
  analogWrite(enb1, speed);
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
  delay(duration);
}

// Y ekseni ileri hareket
void yEkseniÝleriHareket(int duration, int speed) {
  analogWrite(ena2, speed);
  analogWrite(enb2, speed);
  digitalWrite(motor3A, HIGH);
  digitalWrite(motor3B, LOW);
  digitalWrite(motor4A, HIGH);
  digitalWrite(motor4B, LOW);
  delay(duration);
}

// Y ekseni geri hareket
void yEkseniGeriHareket(int duration, int speed) {
  analogWrite(ena2, speed);
  analogWrite(enb2, speed);
  digitalWrite(motor3A, LOW);
  digitalWrite(motor3B, HIGH);
  digitalWrite(motor4A, LOW);
  digitalWrite(motor4B, HIGH);
  delay(duration);
}


void zEkseniYukariHareket(int duration) {
  // L293D 3 ve L293D 4 için 1,2EN ve 3,4EN 5V'a baðlý,tam hýzda çalýþýr
  digitalWrite(motor5A, HIGH);
  digitalWrite(motor5B, LOW);
  digitalWrite(motor6A, HIGH);
  digitalWrite(motor6B, LOW);
  digitalWrite(motor7A, HIGH);
  digitalWrite(motor7B, LOW);
  digitalWrite(motor8A, HIGH);
  digitalWrite(motor8B, LOW);
  delay(duration);
}


void zEkseniAsagiHareket(int duration) {
  digitalWrite(motor5A, LOW);
  digitalWrite(motor5B, HIGH);
  digitalWrite(motor6A, LOW);
  digitalWrite(motor6B, HIGH);
  digitalWrite(motor7A, LOW);
  digitalWrite(motor7B, HIGH);
  digitalWrite(motor8A, LOW);
  digitalWrite(motor8B, HIGH);
  delay(duration);
}


void tümMotorlarDur() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
  digitalWrite(motor3A, LOW);
  digitalWrite(motor3B, LOW);
  digitalWrite(motor4A, LOW);
  digitalWrite(motor4B, LOW);
  digitalWrite(motor5A, LOW);
  digitalWrite(motor5B, LOW);
  digitalWrite(motor6A, LOW);
  digitalWrite(motor6B, LOW);
  digitalWrite(motor7A, LOW);
  digitalWrite(motor7B, LOW);
  digitalWrite(motor8A, LOW);
  digitalWrite(motor8B, LOW);
}

void loop() {
  // X ekseninde ileri git
  xEkseniÝleriHareket(2000, 128); // 2 saniye, %50 hýz
  tümMotorlarDurdur();
  delay(1000);

  // X ekseninde geri git
  xEkseniGeriHareket(2000, 128);
   tümMotorlarDurdur();
  delay(1000);

  // Y ekseninde ileri git
  yEkseniÝleriHareket(2000, 128);
   tümMotorlarDurdur();
  delay(1000);

  // Y ekseninde geri git
 yEkseniGeriHareket(2000, 128);
   tümMotorlarDurdur();
  delay(1000);

  // Z ekseninde yukarý git
  zEkseniYukariHareket(2000);
   tümMotorlarDurdur();
  delay(1000);

  // Z ekseninde aþaðý git
  zEkseniAsagiHareket(2000);
  tümMotorlarDurdur();
  delay(1000);
}
/*
Hýz Kontrolü: X ve Y eksenlerinde hýz kontrolü için 1,2EN ve
3,4EN pinleri PWM pinlerine baðlandý. Z ekseninde hýz kontrolü
yok, çünkü 1,2EN ve 3,4EN pinleri 5V'a baðlý (tam hýz).
Hareket Fonksiyonlarý: Her eksen için ayrý fonksiyonlar yazdýk.
Döngü: Motorlar sýrayla X, Y, Z eksenlerinde hareket eder.*/
