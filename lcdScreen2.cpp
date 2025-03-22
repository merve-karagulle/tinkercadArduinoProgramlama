//LCD ekran� * doldurma ve setcursor fonksiyonu �al��ma projesi
#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
int beklemeSuresi=50;
//'*' karakterleri yaz�l�rken bekleme s�resi
void setup(){
  lcd.begin(16,2);
}
void loop(){
  lcd.setCursor(0,0);
  lcd.print("merve krgl");
  delay(9*beklemeSuresi);
  lcd.clear();
  ekraniDoldur();//bizim void olarak yani geriye de�er d�nd�rmeyen 
  //fonksiyon olarak tan�mlad�k.
  //bu fonksiyonun i�levlerini biz belirtece�iz.
  
}
void ekraniDoldur(){
  int katman=0;
  for(int i=0;i<16;i++){//16 tane sutun 8 8 payla�t�r�ld�.
    //i bu y�zden i<8 olarak al�nd�.
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
    
 //LCD ekran� cursor fonksiyonu ile imle� doldurma projesi
    #include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
int beklemeSuresi=50;


void setup(){
  lcd.begin(16,2);
  lcd.cursor();
/*lcd.cursor() fonksiyonu, Arduino'da LCD ekran kullan�rken
imlecin g�r�n�rl���n� kontrol etmek i�in kullan�l�r.*/
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
    
//LCD ekrana home komutunu kullanrak yaz� yazd�rma projesi

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
  /*lcd.home() fonksiyonu, LCD ekran�ndaki imleci
  ba�lang�� konumuna (0,0) ta��r 
  ve ekran i�eri�ini de�i�tirmeden b�rak�r.*/
  lcd.print("merve");
  delay(1000);
  lcd.clear();
}

//LCD ekrana harf harf yazd�rma ve write fonksiyonu  projesi
#include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
char veri[]={'m','e','r','v','e',' ','k','a','r','a','g','u','l','l','e'};
int beklemesuresi=100;
void setup(){
  lcd.begin(16,2);
}
void loop(){
  for(int i=0;i<15;i++){
    lcd.write(veri[i]);//print fonksiyonu da kullan�labilirdi.
    delay(beklemesuresi);
    }
lcd.clear();
  }
              
 //LCD ekrandaki yaz�y� yaz�p yak�p s�nd�rme projesi
 #include<LiquidCrystal.h>
LiquidCrystal lcd{12,11,5,4,3,2};
void setup(){
  lcd.begin(16,2);
  lcd.print("merve karagulle");
}
void loop(){
 
  /*lcd.display() fonksiyonu, LCD ekran�n g�r�nt�lenmesini a�ar.
  E�er ekran daha �nce lcd.noDisplay() ile kapat�lm��sa,
  tekrar g�r�n�r hale getirir.*/
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}             


              
              
