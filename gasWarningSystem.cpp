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

  // Gerçek sensör deðerini yüzdeye çevirmek için 0-1023 arasýnda map'lenebilir.
  sensorYuzdesi = map(sensorDeger, 0, 1023, 0, 100);

  Serial.print("Sensor Deger = ");
  Serial.print(sensorDeger);
  Serial.print(" | Sensor Yuzdesi = ");
  Serial.println(sensorYuzdesi);

  if (sensorDeger > 300) { //eþik deðeri kendi ortamýna göre deneyerek bulabilirsiniz.
    tone(buzzer, 400);  // 400 Hz alarm
  } else {
    noTone(buzzer);
  }

  delay(500); // Okumalar arasý daha net sonuç için
}

