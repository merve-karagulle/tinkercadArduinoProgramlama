
//Potansiyometre ile RGB led yakma  projesi
int kirmizi=2;
int mavi=3;
int yesil=4;
int pot=A0;
int potdeger;


void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potdeger=analogRead(pot)/4;
  //map fonksiyonun iþlevini üstlenir.
  //monitörde okunan deðer en fazla 1023 iken ledler için 
  //deðeri 4 e bölerek max deðeri 255 yapmaktadýr.
  Serial.println(potdeger);
  
  if(potdeger<70){
    analogWrite(kirmizi,0);
    analogWrite(yesil,0);
    analogWrite(mavi,0);
  }
   if(potdeger<120 && potdeger>70){
    analogWrite(kirmizi,255);
    analogWrite(yesil,0);
    analogWrite(mavi,0);
  }
   if(potdeger>120&&potdeger<170){
    analogWrite(kirmizi,0);
    analogWrite(yesil,255);
    analogWrite(kirmizi,0);
  }
  if(potdeger>170&&potdeger<256){
    analogWrite(kirmizi,0);
    analogWrite(yesil,0);
    analogWrite(mavi,255);
  }
   
 }


// 3 Potansiyometre ile RGB led aydýnlatma projesi
int kirmizi=8;
int mavi=9;
int yesil=10;
int potkirmizi=A0;
int potmavi=A1;
int potyesil=A2;
int potdegerkirmizi;
int potdegermavi;
int potdegeryesil;

void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(potkirmizi, INPUT);
  pinMode(potmavi, INPUT);
  pinMode(potyesil, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  potdegeryesil=analogRead(potyesil)/4;
  potdegerkirmizi=analogRead(potkirmizi)/4;
  potdegermavi=analogRead(potmavi)/4;
  
  analogWrite(kirmizi,potdegerkirmizi);
  analogWrite(yesil,potdegeryesil);
  analogWrite(mavi,potdegermavi);
  
  Serial.print("kirmizi=");
  Serial.println(potdegerkirmizi);
  Serial.print("yesil=");
  Serial.println(potdegeryesil);
  Serial.print("mavi=");
  Serial.println(mavi);
  delay(2000);
  
}


