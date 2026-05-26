#define LDR_PIN A0
#define LED_PIN 2
#define MOTOR1_PIN1 4
#define MOTOR1_PIN2 5
#define MOTOR2_PIN1 6
#define MOTOR2_PIN2 7
#define BUZZER_PIN 10
#define AMPUL 3 
#define MQ_PIN A3
#define TRIG_PIN 8
#define ECHO_PIN 9
#define TMP_PIN A1  

void setup() {
  Serial.begin(9600);  

  pinMode(LED_PIN, OUTPUT);
  pinMode(MOTOR1_PIN1, OUTPUT);
  pinMode(MOTOR1_PIN2, OUTPUT);
  pinMode(MOTOR2_PIN1, OUTPUT);
  pinMode(MOTOR2_PIN2, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(AMPUL, OUTPUT);


  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  if (Serial.available()) {
    String komut = Serial.readString();
    
   
    if (komut == "AMPUL") {
      int ldrDegeri = analogRead(LDR_PIN);
      Serial.print("LDR Degeri:");
      Serial.println(ldrDegeri);
      if (ldrDegeri >500) {
        digitalWrite(AMPUL, HIGH);  
      } else {
        digitalWrite(AMPUL, LOW);   
      }
    }

  
    if (komut == "MOTOR_SAG") {
      digitalWrite(MOTOR1_PIN1, HIGH);
      digitalWrite(MOTOR1_PIN2, LOW);
      digitalWrite(MOTOR2_PIN1, HIGH);
      digitalWrite(MOTOR2_PIN2, LOW);
      
    } else if (komut == "MOTOR_SOL") {
      digitalWrite(MOTOR1_PIN1, LOW);
      digitalWrite(MOTOR1_PIN2, HIGH);
      digitalWrite(MOTOR2_PIN1, HIGH);
      digitalWrite(MOTOR2_PIN2, LOW);
    } else if (komut == "MOTOR_DUR") {
      digitalWrite(MOTOR1_PIN1, LOW);
      digitalWrite(MOTOR1_PIN2, LOW);
      digitalWrite(MOTOR2_PIN1, LOW);
      digitalWrite(MOTOR2_PIN2, LOW);
    }

    
    if (komut == "MESAFE") {
      long mesafe = mesafeOlc();
      Serial.println(mesafe);  
      if (mesafe < 10) {
        digitalWrite(BUZZER_PIN, HIGH);  
      } else {
        digitalWrite(BUZZER_PIN, LOW);
      }
    }

    
    if (komut == "SICAKLIK") {
      int analogDeger = analogRead(TMP_PIN);   
      float voltaj = analogDeger * (5.0 / 1023.0);  
      float sicaklik = (voltaj - 0.5) * 100;  
      Serial.println(sicaklik);  
      if(sicaklik>30){
        digitalWrite(LED_PIN,HIGH);
      }else{
        digitalWrite(LED_PIN,LOW);
      }
    }

  
    if (komut == "GAZ_ALARMI") {
      int deger = analogRead(MQ_PIN);
      Serial.println(deger);
      if (deger > 200) {
        digitalWrite(BUZZER_PIN, HIGH);  
      } else {
        digitalWrite(BUZZER_PIN, LOW);
      }
    }
  }
}


int  mesafeOlc() {
  int  mesafe;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  mesafe = pulseIn(ECHO_PIN, HIGH) / 58.2; 
  
  return mesafe;
}

