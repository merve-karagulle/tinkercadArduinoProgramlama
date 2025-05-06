#include <IRremote.h>

const int irPin = 12; 

const int trigPin1 = 6;
const int echoPin1 = 7;
const int trigPin2 = 8;
const int echoPin2 = 9;

const int motorSol1 = 2;
const int motorSol2 = 3;
const int motorSag1 = 4;
const int motorSag2 = 5;

long sure;
int arkaMesafe;
int onMesafe;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(irPin, ENABLE_LED_FEEDBACK); // Yeni kullaným
 //bu kodu eski sürüm kütüphane eklediðinde
 //desteklenmediði için kullandým
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  pinMode(motorSol1, OUTPUT);
  pinMode(motorSol2, OUTPUT);
  pinMode(motorSag1, OUTPUT);
  pinMode(motorSag2, OUTPUT);
}

void loop() {
  mesafeOlc(); 

  if (IrReceiver.decode()) {
    unsigned long komut = IrReceiver.decodedIRData.decodedRawData;
    Serial.print("Gelen IR Komutu: 0x");
    Serial.println(komut, HEX);

    if (komut == 0xF906BF00) { // Ýleri tuþu
      if (onMesafe >= 20) {
        ileriGit();
        Serial.println("Ileri gidiyor.");
      } else {
        dur();
        Serial.println("Onde engel var, ileri gidemeyiz.");
      }
    } 
    else if (komut == 0xFB04BF00) { // Geri tuþu
      if (arkaMesafe >= 20) {
        geriGit();
        Serial.println("Geri gidiyor.");
      } else {
        dur();
        Serial.println("Arkada engel var, geri gidemeyiz.");
      }
    } 
    else if (komut == 0xFF00BF00) { // Dur tuþu 
      dur();
      Serial.println("Durdu.");
    }

    IrReceiver.resume(); 
  }

  delay(100);
}

void mesafeOlc() {
  
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  sure = pulseIn(echoPin1, HIGH);
  onMesafe = sure * 0.0343 / 2;  

  
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  sure = pulseIn(echoPin2, HIGH);
  arkaMesafe = sure * 0.0343 / 2;  
 
  Serial.print("On Mesafe: ");
  Serial.print(onMesafe);
  Serial.println(" cm");
  Serial.print("Arka Mesafe: ");
  Serial.print(arkaMesafe);
  Serial.println(" cm");
}


void ileriGit() {
  digitalWrite(motorSol1, LOW);
  digitalWrite(motorSol2, HIGH);
  digitalWrite(motorSag1, LOW);
  digitalWrite(motorSag2, HIGH);
}

void geriGit() {
  digitalWrite(motorSol1, HIGH);
  digitalWrite(motorSol2, LOW);
  digitalWrite(motorSag1, HIGH);
  digitalWrite(motorSag2, LOW);
}

void dur() {
  digitalWrite(motorSol1, LOW);
  digitalWrite(motorSol2, LOW);
  digitalWrite(motorSag1, LOW);
  digitalWrite(motorSag2, LOW);
}

