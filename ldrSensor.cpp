
//lDR ile karanlıkta led yakma projesi
int ldr=A0;
int ldrdeger;
int led=8;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  if(ldrdeger>600){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
  delay(100);
}
//ldr değerimiz karanlıkta daha fazla iken
//aydınlıkta giderek düşmektedir.


//LDR Sensör ile karanlıkta giderek parlaklığı artan led projesi

int led=8;
int ldr=A0;
int ldrdeger;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ldr,INPUT);//yazılmayınca da aynı düzende çalışabilmektedir.
  Serial.begin(9600);
  
  
}

void loop()
{
  Serial.println(analogRead(ldr));
  analogWrite(led,analogRead(ldr)/3);
  delay(10);
}

//LDR ile ortamın aydınlığına bağlı olarak 5 adet led yakma projesi
int ldrdeger;

int led1=3;
int led2=4;
int led3=5;
int led4=6;
int led5=7;
int ldr=A0;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(ldr,INPUT);
    Serial.begin(9600);
}

void loop()
{
  ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  if(ldrdeger>900){
     digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
  }
  else if(ldrdeger>=600 &&ldrdeger<900){
     digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
  }
    else if(ldrdeger>=500 &&ldrdeger<600){
     digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
  } 
  else if(ldrdeger>=450 &&ldrdeger<500){
     digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
  }
 else if(ldrdeger>=350 &&ldrdeger<450){
     digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
  }
  else {
     digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
  }
 delay(500);
 
 
}
