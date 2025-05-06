int sensorDeger;
int sensorYuzdesi;
int sensor = A0;
int buzzer = 13;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorDeger = analogRead(sensor);

  // Ger�ek sens�r de�erini y�zdeye �evirmek i�in 0-1023 aras�nda map'lenebilir.
  sensorYuzdesi = map(sensorDeger, 0, 1023, 0, 100);

  Serial.print("Sensor Deger = ");
  Serial.print(sensorDeger);
  Serial.print(" | Sensor Yuzdesi = ");
  Serial.println(sensorYuzdesi);

  if (sensorDeger > 300) { //e�ik de�eri kendi ortam�na g�re deneyerek bulabilirsiniz.
    tone(buzzer, 400);  // 400 Hz alarm
  } else {
    noTone(buzzer);
  }

  delay(500); // Okumalar aras� daha net sonu� i�in
}

