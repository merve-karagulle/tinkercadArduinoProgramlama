
//Buton ile ledin parlaklığını arttırma projesi 
int parlaklik=0;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(7,INPUT);
}

void loop()
{
  if(digitalRead(7)==1){
   while(digitalRead(7)==1){}//butondan elimizi çekene kadar döngüde kalmaktadır.
     parlaklik+=25;
    if(parlaklik>=255)//en fazla 255 değerine kadar alabilir.
    {
      parlaklik=0;
    }
    analogWrite(3,parlaklik);//parlaklık değerini 3 nolu pine aktarıyor.Bu işlem analog olarak yapıldı.
  }
    
}