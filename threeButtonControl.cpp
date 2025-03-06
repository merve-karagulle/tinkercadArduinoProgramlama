
int led = 7;          // LED baðlý olduðu pin
int buton1 = 2;       // Birinci buton
int buton2 = 3;       // Ýkinci buton
int buton3 = 4;       // Üçüncü buton

void setup() {
    pinMode(led, OUTPUT);
    pinMode(buton1, INPUT);
    pinMode(buton2, INPUT);
    pinMode(buton3, INPUT);
}

void loop() {
    if (digitalRead(buton1) == LOW) { // Butona basýldýðýnda LED yanacak
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
    }

    if (digitalRead(buton2) == LOW) { // Butona basýldýðýnda LED iki kere yanýp sönecek
        for (int i = 0; i < 2; i++) {
            digitalWrite(led, HIGH);
            delay(500);
            digitalWrite(led, LOW);
            delay(500);
        }
    }

    if (digitalRead(buton3) == LOW) { // Butona basýldýðýnda LED dört kere yanýp sönecek
        for (int i = 0; i < 4; i++) {
            digitalWrite(led, HIGH);
            delay(250);
            digitalWrite(led, LOW);
            delay(250);
        }
    }
}

