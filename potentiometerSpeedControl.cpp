
// 
int led;
int pot=0;

void setup()
{
  Serial.begin(9600);
  for(led=8;led>1;led--){
    pinMode(led,OUTPUT);
  }
}

void loop()
{
  for(led=8;led>1;led--){
    pot=analogRead(A0);
    pot=map(pot,0,1023,0,1000);
    
    digitalWrite(led,HIGH);
    Serial.print("led: ");
    Serial.print(led);
    
    Serial.print("\t");//tab kadar boþluk býrakýr.
    Serial.print("bekleme suresi: ");
    Serial.print(pot);
    Serial.println("ms");
    delay(pot);
    digitalWrite(led,LOW);
  }
    
}
