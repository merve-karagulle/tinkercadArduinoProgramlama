// C++ code
//LDR ve buzzer ile alarm yap�m projesi
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
  //loop fonksiyonu i�inde de de�i�ken tan�mlanabilir.
  Serial.println(deger);
   
  if(deger<400){
    tone(8,440,2000);
      //tone fonksiyonu buzzera ses atamak i�in kullan�l�r.
      //tone fonksiyonun i�indeki ilk k�s�m ba�l� oldu�u pin numaras�d�r.
      //ikinci k�s�m buton ses numaras� olmaktad�r.farkl� numaralar da girilebilir.
      //���nc� k�s�m ise bu sesin ka� saniye s�rece�i hakk�ndad�r.
      //e�er ���nc� k�s�m yaz�lmazsa ses hep olur.
  }else {
    noTone(buzzer);//buzzer tonunu kapat demektir.
  }
  delay(10);
}

//Butonlarla buzzer kullan�m projesi

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

 //Buzzer ile ufak bir �ark� �alma projesi
    #define doo 1000//ger�ek nnota de�erlerimiz sabit olarak at�yoruz.
//kal�n do 
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
    //loop i�erisinde de de�i�ken tan�mlanabilir.
    //1200 tempoyu notasuresine bolerek her bir notan�n s�resi bulunur.
   tone(8,melodi[nota],sure);
    delay(sure*1.2);
      //notalar aras�nda biraz beklenecektir.
      //�arpan bir olarak al�n�rsa notalar biti�ik olmaktad�r.
  }
  
  
  }
    
    
    

