
//Araç park sensörü yapım  projesi 1(3 bacaklı sensör)

int santimetre;
int sure;
int trigPin=7;
int mavi=10;
int yesil=9;
int kirmizi=8;
int buzzerPin=5;


void setup()
{
   pinMode(mavi, OUTPUT);
   pinMode(yesil, OUTPUT);
   pinMode(kirmizi, OUTPUT);
   pinMode(buzzerPin,INPUT);
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
  
  if(santimetre>40&&santimetre<55){
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,HIGH);
    
    tone(buzzerPin,440);
    delay(100);
    noTone(buzzerPin);
    delay(80);
  }
  else if(santimetre>55&&santimetre<70){
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
    
    tone(buzzerPin,400);
    delay(100);
    noTone(buzzerPin);
    delay(80);
  }
  else if(santimetre>70&&santimetre<100){
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
    
    tone(buzzerPin,400);
    delay(100);
    noTone(buzzerPin);
    delay(80);
  }
  else {
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
   
    noTone(buzzerPin);
    delay(80);
  }
}

//Araç park sensörü yapım  projesi 2(4 bacaklı sensör)
//
int santimetre;
int sure;
int trigPin=7;
int mavi=10;
int yesil=9;
int kirmizi=8;
int buzzerPin=5;
int echoPin=6;


void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
   pinMode(mavi, OUTPUT);
   pinMode(yesil, OUTPUT);
   pinMode(kirmizi, OUTPUT);
   pinMode(buzzerPin,INPUT);
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
  
  if(santimetre>40&&santimetre<55){
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,HIGH);
    
    tone(buzzerPin,440);
    delay(100);
    noTone(buzzerPin);
    delay(80);
  }
  else if(santimetre>55&&santimetre<70){
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,HIGH);
    digitalWrite(kirmizi,LOW);
    
    tone(buzzerPin,400);
    delay(100);
    noTone(buzzerPin);
    delay(80);
  }
  else if(santimetre>70&&santimetre<100){
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
    
    tone(buzzerPin,400);
    delay(100);
    noTone(buzzerPin);
    delay(80);
  }
  else {
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
   
    noTone(buzzerPin);
    delay(80);
  }
}
