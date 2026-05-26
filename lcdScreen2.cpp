//LCD ekraný * doldurma ve setcursor fonksiyonu çalýþma projesi
#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
int beklemeSuresi=50;
//'*' karakterleri yazýlýrken bekleme süresi
void setup(){
  lcd.begin(16,2);
}
void loop(){
  lcd.setCursor(0,0);
  lcd.print("merve krgl");
  delay(9*beklemeSuresi);
  lcd.clear();
  ekraniDoldur();//bizim void olarak yani geriye deðer döndürmeyen 
  //fonksiyon olarak tanýmladýk.
  //bu fonksiyonun iþlevlerini biz belirteceðiz.
  
}
void ekraniDoldur(){
  int katman=0;
  for(int i=0;i<16;i++){//16 tane sutun 8 8 paylaþtýrýldý.
    //i bu yüzden i<8 olarak alýndý.
    lcd.setCursor(katman,0);
    lcd.print("*");
    delay(beklemeSuresi);
    lcd.setCursor(katman,1);
    lcd.print("*");
    delay(beklemeSuresi);
    katman++;
  }
  lcd.clear();
}
    
 //LCD ekraný cursor fonksiyonu ile imleç doldurma projesi
    #include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
int beklemeSuresi=50;


void setup(){
  lcd.begin(16,2);
  lcd.cursor();
/*lcd.cursor() fonksiyonu, Arduino'da LCD ekran kullanýrken
imlecin görünürlüðünü kontrol etmek için kullanýlýr.*/
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("merve");
  delay(5*beklemeSuresi);
  lcd.clear();
  ekraniGez();
}
void ekraniGez(){
  int katman=0;
  for(int i=0;i<8;i++){
    lcd.setCursor(0+katman,0);
    delay(beklemeSuresi);
    lcd.setCursor(15-katman,0);
    delay(beklemeSuresi);
    lcd.setCursor(15-katman,1);
    delay(beklemeSuresi);
    lcd.setCursor(0+katman,1);
    delay(beklemeSuresi);
    katman++;
    
  }
  lcd.clear();
}
    
//LCD ekrana home komutunu kullanrak yazý yazdýrma projesi

#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};

void setup(){
  lcd.begin(16,2);
}
void loop(){
  lcd.setCursor(6,0);
  lcd.print("karagulle");
  delay(1000);
   lcd.home();
  /*lcd.home() fonksiyonu, LCD ekranýndaki imleci
  baþlangýç konumuna (0,0) taþýr 
  ve ekran içeriðini deðiþtirmeden býrakýr.*/
  lcd.print("merve");
  delay(1000);
  lcd.clear();
}

//LCD ekrana harf harf yazdýrma ve write fonksiyonu  projesi
#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
char veri[]={'m','e','r','v','e',' ','k','a','r','a','g','u','l','l','e'};
int beklemesuresi=100;
void setup(){
  lcd.begin(16,2);
}
void loop(){
  for(int i=0;i<15;i++){
    lcd.write(veri[i]);//print fonksiyonu da kullanýlabilirdi.
    delay(beklemesuresi);
    }
lcd.clear();
  }
              
 //LCD ekrandaki yazýyý yazýp yakýp söndürme projesi
 #include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
void setup(){
  lcd.begin(16,2);
  lcd.print("merve karagulle");
}
void loop(){
 
  /*lcd.display() fonksiyonu, LCD ekranýn görüntülenmesini açar.
  Eðer ekran daha önce lcd.noDisplay() ile kapatýlmýþsa,
  tekrar görünür hale getirir.*/
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}             


              
              
