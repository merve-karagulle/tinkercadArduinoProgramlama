//Butona Basılı Kalındığında Ledin Yanması Projesi
void setup()
{
  pinMode(0, OUTPUT);//0 nolu pinden çıkış olur.
  pinMode(4,INPUT);//Buton 4 nolu pine sinyal girişi yapar.
}

void loop()
{
  if(digitalRead(4)==LOW){//Eğer okunan değer butona basılmadıysa 
  digitalWrite(0, LOW);//Ledi sönük tut.
  }
  else{//Butona basıldıysa ledi yak.
  digitalWrite(0,HIGH);
  }
}

//Butona 1 Kez Basıldığında Ledin Yanması Bir Kez Basıldığında Ledin Kapanması Projesi
int leddurum=0;
int butondurum=0;
int x=0;

void setup()
{
  pinMode(0,OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  butondurum=digitalRead(2);//okunan değeri buton duruma aktar.
  if(butondurum==1 && x==0){//butona basıldıysa içeri gir.
    x=1;
    if(leddurum==0){
      leddurum=1;
    }else{
      leddurum=0;
    }
  }
  if(leddurum==1){
    digitalWrite(0,HIGH);//led değeri 1 ise ledi yak.
  }else{
    digitalWrite(0,LOW);//led değeri 0 ise ledi söndür.
  }

  if(butondurum==0&&x==1){
    x=0;//döngünün devamı için x tekrar sıfırlanır.
  }
  delay(10);//gecikmeyi en aza indirmek için kullanılır.
}
    
      
      