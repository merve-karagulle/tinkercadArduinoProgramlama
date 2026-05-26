//Potansiyometre deðerlerini serial monitörde yazdýrma projesi
int pot=A0;
int deger;

void setup()
{
  pinMode(pot, INPUT);
  Serial.begin(9600);//serial monitör giriþi yapýlýr.
}

void loop()
{
  deger=analogRead(pot);//potansiyemetre analog deðer okunur.
  Serial.println(deger);//deðer ekrana yazdýrýlýr.
  delay(2000);
}

//Potansiyometre ile led yakma projesi
int led=6;
int potdeger;
int potdeger2;
int pot=A0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potdeger=analogRead(pot);
  potdeger2=map(potdeger,0,1023,0,255);
  Serial.println(potdeger2);
  //map() fonksiyonu, bir deðeri belirli bir aralýktan baþka bir aralýða 
  //ölçeklendirmek için kullanýlýr.
  //analogRead() fonksiyonu 0 - 1023 arasý deðer döndürür.
  //Ancak LED parlaklýðý (PWM) için 0 - 255 arasý bir deðer gerekir.
  //map() fonksiyonu ile 0-1023 deðerini 0-255’e dönüþtürebiliriz
  //map(deger, giriþMin, giriþMax, çýkýþMin, çýkýþMax);
  delay(10);
  analogWrite(led,potdeger2);
}

//Potansiyometre ile 3 ledin yanma durumunu kontrol etme projesi
int maviLed=8;
int yesilLed=9;
int sariLed=10;
int pot=A0;
int potdeger;
void setup()
{
  pinMode(maviLed, OUTPUT);
  pinMode(yesilLed, OUTPUT);
  pinMode(sariLed, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potdeger=analogRead(pot);
  
  Serial.print("deger=");//monitör ekranýna "" arasýndakini yazdýrýr.
  Serial.println(potdeger);
  
  if(potdeger<250){
    digitalWrite(maviLed,LOW);
    digitalWrite(sariLed,LOW);
    digitalWrite(yesilLed,LOW);
  }
     if(potdeger>250){
    digitalWrite(maviLed,LOW);
    digitalWrite(sariLed,HIGH);
    digitalWrite(yesilLed,LOW);
  }

     if(potdeger>500){
    digitalWrite(maviLed,LOW);
    digitalWrite(sariLed,HIGH);
    digitalWrite(yesilLed,HIGH);
  }
  
     if(potdeger>750){
    digitalWrite(maviLed,HIGH);
    digitalWrite(sariLed,HIGH);
    digitalWrite(yesilLed,HIGH);
  }
}
