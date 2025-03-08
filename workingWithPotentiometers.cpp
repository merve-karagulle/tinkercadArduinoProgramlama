//Potansiyometre de�erlerini serial monit�rde yazd�rma projesi
int pot=A0;
int deger;

void setup()
{
  pinMode(pot, INPUT);
  Serial.begin(9600);//serial monit�r giri�i yap�l�r.
}

void loop()
{
  deger=analogRead(pot);//potansiyemetre analog de�er okunur.
  Serial.println(deger);//de�er ekrana yazd�r�l�r.
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
  //map() fonksiyonu, bir de�eri belirli bir aral�ktan ba�ka bir aral��a 
  //�l�eklendirmek i�in kullan�l�r.
  //analogRead() fonksiyonu 0 - 1023 aras� de�er d�nd�r�r.
  //Ancak LED parlakl��� (PWM) i�in 0 - 255 aras� bir de�er gerekir.
  //map() fonksiyonu ile 0-1023 de�erini 0-255�e d�n��t�rebiliriz
  //map(deger, giri�Min, giri�Max, ��k��Min, ��k��Max);
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
  
  Serial.print("deger=");//monit�r ekran�na "" aras�ndakini yazd�r�r.
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
