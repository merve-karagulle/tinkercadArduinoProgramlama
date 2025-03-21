//Mesafe sensörü ile belirli uzaklýkta led yakma projesi(3 bacaklý)

int sure;  
int santimetre;  
int trigPin = 7;  
int mavi = 8;  
int kirmizi = 9;  
int yesil = 10;  

void setup() {  
    pinMode(kirmizi, OUTPUT);  
    pinMode(yesil, OUTPUT);  
    pinMode(mavi, OUTPUT);  
    Serial.begin(9600);  
}

void loop() {  
    pinMode(trigPin, OUTPUT);  
    digitalWrite(trigPin, LOW);  
    delayMicroseconds(2);  
    digitalWrite(trigPin, HIGH);  
    delayMicroseconds(10);  
    digitalWrite(trigPin, LOW);  
    pinMode(trigPin, INPUT);  
    sure = pulseIn(trigPin, HIGH);  
    santimetre = (sure / 2) / 29.1;  

    Serial.print(santimetre);  
    Serial.println("cm");  

    if (santimetre < 50 && santimetre > 30) {  
        digitalWrite(kirmizi, LOW);  
        digitalWrite(yesil, LOW);  
        digitalWrite(mavi, LOW);  
    }  
    else if (santimetre < 70 && santimetre > 50) {  
        digitalWrite(kirmizi, HIGH);  
        digitalWrite(yesil, LOW);  
        digitalWrite(mavi, LOW);  
    }  
    else if (santimetre < 90 && santimetre > 70) {  
        digitalWrite(kirmizi, LOW);  
        digitalWrite(yesil, HIGH);  
        digitalWrite(mavi, LOW);  
    }  
    else if (santimetre < 120 && santimetre > 90) {  
        digitalWrite(kirmizi, LOW);  
        digitalWrite(yesil, LOW);  
        digitalWrite(mavi, HIGH);  
    }  
    else {  
        digitalWrite(kirmizi, HIGH);  
        digitalWrite(yesil, HIGH);  
        digitalWrite(mavi, HIGH);  
    }  
    delay(100);  
}

//Mesafe sensörü ile belirli uzaklýkta led yakma projesi(4 bacaklý)
int sure;  
int santimetre;  
int trigPin = 7;  
int echoPin=6;
int mavi = 8;  
int kirmizi = 9;  
int yesil = 10;  

void setup() {  
    pinMode(kirmizi, OUTPUT);  
    pinMode(yesil, OUTPUT);  
    pinMode(mavi, OUTPUT);  
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
    Serial.begin(9600);  
}

void loop() {  
    pinMode(trigPin, OUTPUT);  
    digitalWrite(trigPin, LOW);  
    delayMicroseconds(2);  
    digitalWrite(trigPin, HIGH);  
    delayMicroseconds(10);  
    digitalWrite(trigPin, LOW);  
    pinMode(trigPin, INPUT);  
    sure = pulseIn(echoPin, HIGH);  
    santimetre = (sure / 2) / 29.1;  

    Serial.print(santimetre);  
    Serial.println("cm");  

    if (santimetre < 50 && santimetre > 30) {  
        digitalWrite(kirmizi, LOW);  
        digitalWrite(yesil, LOW);  
        digitalWrite(mavi, LOW);  
    }  
    else if (santimetre < 70 && santimetre > 50) {  
        digitalWrite(kirmizi, HIGH);  
        digitalWrite(yesil, LOW);  
        digitalWrite(mavi, LOW);  
    }  
    else if (santimetre < 90 && santimetre > 70) {  
        digitalWrite(kirmizi, LOW);  
        digitalWrite(yesil, HIGH);  
        digitalWrite(mavi, LOW);  
    }  
    else if (santimetre < 120 && santimetre > 90) {  
        digitalWrite(kirmizi, LOW);  
        digitalWrite(yesil, LOW);  
        digitalWrite(mavi, HIGH);  
    }  
    else {  
        digitalWrite(kirmizi, HIGH);  
        digitalWrite(yesil, HIGH);  
        digitalWrite(mavi, HIGH);  
    }  
    delay(100);  
}
 


