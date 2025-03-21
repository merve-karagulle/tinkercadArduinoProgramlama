// Hýrsýz Alarm Yapým projesi 1 ( 3 Bacaklý Sensör)
int santimetre;
int sure;
int buzzerPin=6;
int trigPin=7;

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(trigPin,INPUT);
  sure=pulseIn(trigPin,HIGH);
   santimetre=(sure/2)/29.1;
  Serial.print(santimetre);
  Serial.println("cm");
  
  
  if(santimetre<40){
    noTone(buzzerPin);
  }
  if(santimetre>40){
    tone(buzzerPin,400);
  }
  

  
}
// Hýrsýz Alarm Yapým projesi 2( 4 Bacaklý Sensör)
int santimetre;
int sure;
int buzzerPin=8;
int trigPin=7;
int echoPin=6;


void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  
}

void loop()
{

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
   santimetre=(sure/2)/29.1;
  Serial.print(santimetre);
  Serial.println("cm");
  
  
  if(santimetre<40){
    noTone(buzzerPin);
  }
  if(santimetre>40){
    tone(buzzerPin,400);
  }
  

  
}






