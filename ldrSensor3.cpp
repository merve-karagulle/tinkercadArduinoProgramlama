
//Karanlýkta LDR ile RGB led yakma projesi
int kirmizi=9;
int mavi=10;
int yesil=11;
int ldr=A0;//0 dersek de analog olarak okur.
int ldrdeger;

void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  if(ldrdeger<350){
    analogWrite(kirmizi,255);
    analogWrite(yesil,239);
    analogWrite(mavi,120);
  }
  else  if(ldrdeger<550){
    analogWrite(kirmizi,15);
    analogWrite(yesil,29);
    analogWrite(mavi,250);
  }
   else if(ldrdeger<700){
    analogWrite(kirmizi,0);
    analogWrite(yesil,255);
    analogWrite(mavi,160);
  }
  else  if(ldrdeger<1000){
    analogWrite(kirmizi,5);
    analogWrite(yesil,189);
    analogWrite(mavi,70);
  }
  else if (ldrdeger<1200){
    analogWrite(kirmizi,249);
    analogWrite(yesil,34);
    analogWrite(mavi,56);
  }
}

































//LDR ile led yakma ve potansiyometre ile parlaklýk ayarlama projesi 
int ldr=A0;
int pot=A1;
int led=8;
int ldrdeger;
int potdeger;

void setup()
{
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  ldrdeger=analogRead(ldr);
  
  potdeger=map(analogRead(pot),0,1023,0,255);
  Serial.print("LDR deger: ");//print bir sonraki satýra atlamaz.
  Serial.print(ldrdeger);//println bir sonraki satýra atlar.
  
  Serial.print(" POT deger: ");  
  Serial.println(potdeger);
  
  
  if(ldrdeger>350){
    analogWrite(led,potdeger);
  }else{
    analogWrite(led,LOW);
  }
  delay(500);
}
