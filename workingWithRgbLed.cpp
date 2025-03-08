//RGB Led ile random renk yakma projesi
int kirmizi=3;
int mavi=4;
int yesil=5;
int kirmiziRandom;
int maviRandom;
int yesilRandom;
void setup()
{
  pinMode(kirmizi,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(yesil,OUTPUT);
}

void loop()
{
 
  kirmiziRandom=random(0,256);//rastgele deðer atamasý random() fonksiyonu ile yapýlýr.
  maviRandom=random(0,256);//0 dahil 256 dahil deðildir.
  yesilRandom=random(0,256);
  //Rastgele seçilen random deðerleri analog olarak  gösterilir.
  analogWrite(kirmizi,kirmiziRandom);
  analogWrite(mavi,maviRandom);
  analogWrite(yesil,yesilRandom);
  delay(1000);
}

//3 buton ile RGB led renk ayarlama projesi
int kirmizi=2;
int mavi=3;
int yesil=4;
int maviButon=8;
int yesilButon=9;
int kirmiziButon=10;
int kirmiziartis;
int yesilartis;
int maviartis;

void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(mavi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(maviButon,INPUT);
  pinMode(kirmiziButon,INPUT);
  pinMode(yesilButon,INPUT);
}

void loop()
{
  if(digitalRead(kirmiziButon)==HIGH){
    delay(15);
    kirmiziartis++;
    if(kirmiziartis>=255){
      kirmiziartis=0;
    }
  }
  if(digitalRead(yesilButon)==HIGH){
    delay(15);
    yesilartis++;
    if(yesilartis>=255){
      yesilartis=0;
    }
  }
  if(digitalRead(maviButon)==HIGH){
    delay(15);
    maviartis++;
    if(maviartis>=255){
      maviartis=0;
    }
  }
  analogWrite(kirmizi,kirmiziartis);
  analogWrite(yesil,yesilartis);
  analogWrite(mavi,maviartis);
 }
