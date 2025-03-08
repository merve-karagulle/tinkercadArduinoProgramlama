//RGB led yakma projesi
int kirmizi=8;
int mavi=9;
int yesil=10;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(mavi,OUTPUT);
    
}

void loop()
{
  analogWrite(kirmizi,255);
  analogWrite(mavi,0);
  analogWrite(yesil,0);
  delay(1000);
  
  analogWrite(kirmizi,0);
  analogWrite(mavi,255);
  analogWrite(yesil,0);
  delay(1000);
  
  analogWrite(kirmizi,0);
  analogWrite(mavi,0);
  analogWrite(yesil,255);
  delay(1000);
  
  analogWrite(kirmizi,124);
  analogWrite(mavi,45);
  analogWrite(yesil,67);
  delay(1000);
  
  analogWrite(kirmizi,58);
  analogWrite(mavi,234);
  analogWrite(yesil,89);
  delay(1000);
    
  analogWrite(kirmizi,67);
  analogWrite(mavi,39);
  analogWrite(yesil,145);
  delay(1000);
  
  analogWrite(kirmizi,255);
  analogWrite(mavi,0);
  analogWrite(yesil,102);
  delay(1000);
   
  analogWrite(kirmizi,255);
  analogWrite(mavi,102);
  analogWrite(yesil,0);
  delay(1000);
  
   
  analogWrite(kirmizi,255);
  analogWrite(mavi,234);
  analogWrite(yesil,245);
  delay(1000);
  
  
}
