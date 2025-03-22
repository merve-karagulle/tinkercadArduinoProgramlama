//Mesafe sens�r�ndeki de�eri LCD ekrana yazd�rma projesi(3 bacakl�)
#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
int trigPin=7;
int sure;
int santimetre;
void setup(){
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop(){
  pinMode(trigPin,OUTPUT);
digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(trigPin,INPUT);
  sure=pulseIn(trigPin,HIGH);
  santimetre=(sure/2)/29;
  Serial.println(santimetre);

  
  lcd.setCursor(0,0);
 lcd.print("mesafe   ");
  lcd.setCursor(7,0);
  lcd.print(santimetre);
  lcd.setCursor(4,1);
  lcd.print("santimetre");
  delay(100);
  
}
//Mesafe sens�r�ndeki de�eri LCD ekrana yazd�rma projesi(4 bacakl�)
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trigPin = 7;
int echoPin = 6;
long sure;
int santimetre;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  // Ultrasonik Sens�r Mesafe �l��m�
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  santimetre = (sure / 2) / 29;

  Serial.println(santimetre); // Seri monit�re yaz

  // LCD G�ncellemesi
  lcd.setCursor(0, 0);
  lcd.print("Mesafe: ");

  lcd.setCursor(8, 0);
  lcd.print("    "); // Eski de�eri temizle
  lcd.setCursor(8, 0);
  lcd.print(santimetre);

  lcd.setCursor(12, 0);
  lcd.print("cm");

  delay(500);
}


