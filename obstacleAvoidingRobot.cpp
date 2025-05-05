

//Engelden kaçan robot yapým projesi
const int switchPin   = 13;  
const int ledPin      = 12;  

const int trigPin1     = 6;
const int echoPin1     = 7;
const int trigPin2     = 8;
const int echoPin2     = 9;

const int motorSol1   = 2;
const int motorSol2   = 3;
const int motorSag1   = 4;
const int motorSag2   = 5;

long sure;
int arkaMesafe;
int onMesafe;

void setup() {
  // Serial Monitor baþlat
  Serial.begin(9600);

  // Pin modlarý
  pinMode(switchPin, INPUT_PULLUP); // Anahtar pull-up ile
  pinMode(ledPin, OUTPUT);
  
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
  bool sistemAcik = (digitalRead(switchPin) == HIGH);

  if (!sistemAcik) {
    // Sistem kapalý: motor dur, LED söndür
    digitalWrite(motorSol1, LOW);
    digitalWrite(motorSol2, LOW);
    digitalWrite(motorSag1, LOW);
    digitalWrite(motorSag2, LOW);
    digitalWrite(ledPin, LOW);

    return;
  }

  // Sistem açýk: LED yak
  digitalWrite(ledPin, HIGH);

  // Mesafe ölçümü
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);

  sure = pulseIn(echoPin1, HIGH);
  onMesafe = sure * 0.034 / 2;
  
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

  sure = pulseIn(echoPin2, HIGH);
  arkaMesafe = sure * 0.034 / 2;

  // Serial Monitöre mesafeyi yazdýr
  Serial.print("On Mesafe: ");
  Serial.print(onMesafe);
  Serial.println(" cm");
  Serial.print("Arka Mesafe: ");
  Serial.print(arkaMesafe);
  Serial.println(" cm");

  // Engel kontrolü
  if (onMesafe < 20 && arkaMesafe>40) {
    
    digitalWrite(motorSol1, LOW);
    digitalWrite(motorSol2, HIGH);  // Motor geri gidiyor
    digitalWrite(motorSag1, LOW);
    digitalWrite(motorSag2, HIGH);  // Motor geri gidiyor
    

    Serial.println("Onde engel var, motorlar geri gidiyor.");
  } else if(onMesafe>40 && arkaMesafe<20) {
    // Engel yoksa ileri git
     
    digitalWrite(motorSol1, LOW);
    digitalWrite(motorSol2, HIGH);
    digitalWrite(motorSag1, LOW);
    digitalWrite(motorSag2, HIGH); 
    
    Serial.println("Arkada engel var, motorlar ileri gidiyor.");
  }else if(onMesafe<20 && arkaMesafe<20){
     digitalWrite(motorSol1, LOW);
    digitalWrite(motorSol2, LOW);
    digitalWrite(motorSag1, LOW);
    digitalWrite(motorSag2, LOW); 
    
    Serial.println("Arkada VE onde engel var, motorlar duruyor.");
  }else{
  digitalWrite(motorSol1, LOW);
    digitalWrite(motorSol2, HIGH);
    digitalWrite(motorSag1, LOW);
    digitalWrite(motorSag2, HIGH); 
    Serial.println("Arka ve onde engel yok,tercihen motorlar one gidiyor.");
  }

  delay(200);
}

