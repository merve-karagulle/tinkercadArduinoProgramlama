// C++ code
//LDR ve buzzer ile alarm yapým projesi
int buzzer=8;
int ldr=A0;

void setup()
{
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int deger=analogRead(ldr);
  //loop fonksiyonu içinde de deðiþken tanýmlanabilir.
  Serial.println(deger);
   
  if(deger<400){
    tone(8,440,2000);
      //tone fonksiyonu buzzera ses atamak için kullanýlýr.
      //tone fonksiyonun içindeki ilk kýsým baðlý olduðu pin numarasýdýr.
      //ikinci kýsým buton ses numarasý olmaktadýr.farklý numaralar da girilebilir.
      //üçüncü kýsým ise bu sesin kaç saniye süreceði hakkýndadýr.
      //eðer üçüncü kýsým yazýlmazsa ses hep olur.
  }else {
    noTone(buzzer);//buzzer tonunu kapat demektir.
  }
  delay(10);
}

//Butonlarla buzzer kullaným projesi

    void setup()
{
   pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, INPUT);
}

void loop()
{
  if(digitalRead(7)==HIGH){
    tone(8,440,500);
  }
   if(digitalRead(6)==HIGH){
    tone(8,494,500);
  }
   if(digitalRead(5)==HIGH){
    tone(8,523,500);
  }
  delay(10);
}

 //Buzzer ile ufak bir þarký çalma projesi
    #define doo 1000//geröek nnota deðerlerimiz sabit olarak atýyoruz.
//kalýn do 
#define re 1122
#define mi  1260
#define fa 1335
#define sol 1498
#define la 1681
#define si 1887
#define dom 2000
//ince do


int melodi[]={re,mi,fa,sol,fa,sol,sol,sol,fa,sol,sol,sol ,fa,mi,re, mi ,fa ,sol ,fa ,sol ,sol,sol,fa,sol,sol,sol,fa,mi,re,mi,fa,sol,mi,fa,re,mi};
int notasuresi[]={4,4,2,4,3,4,3,4,2,4,5,3,2,4,2,4,5,2,3,4,3,4,3,2,4,3,2};
int tempo=1200;
void setup()
{
}

void loop()
{
  for(int nota=0;nota<56;nota++){
    int sure=tempo/notasuresi[nota];
    //loop içerisinde de deðiþken tanýmlanabilir.
    //1200 tempoyu notasuresine bolerek her bir notanýn süresi bulunur.
   tone(8,melodi[nota],sure);
    delay(sure*1.2);
      //notalar arasýnda biraz beklenecektir.
      //çarpan bir olarak alýnýrsa notalar bitiþik olmaktadýr.
  }
  
  
  }
    
    
    

