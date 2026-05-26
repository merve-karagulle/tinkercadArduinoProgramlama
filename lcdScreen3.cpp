//Mesafe sensöründeki deðeri LCD ekrana yazdýrma projesi(3 bacaklý)
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
//Mesafe sensöründeki deðeri LCD ekrana yazdýrma projesi(4 bacaklý)
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
  // Ultrasonik Sensör Mesafe Ölçümü
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  sure = pulseIn(echoPin, HIGH);
  santimetre = (sure / 2) / 29;

  Serial.println(santimetre); // Seri monitöre yaz

  // LCD Güncellemesi
  lcd.setCursor(0, 0);
  lcd.print("Mesafe: ");

  lcd.setCursor(8, 0);
  lcd.print("    "); // Eski deðeri temizle
  lcd.setCursor(8, 0);
  lcd.print(santimetre);

  lcd.setCursor(12, 0);
  lcd.print("cm");

  delay(500);
}


