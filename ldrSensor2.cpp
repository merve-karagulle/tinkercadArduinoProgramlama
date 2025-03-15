//LDR Sens�rden Gelen De�eri Volt Olarak �l�me Projesi

int direnc=10000;//direnc de�erimiz 10k
int direncmax=1023;//direnc �l��m en fazla 1023

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 int ldrdeger=analogRead(A0);
 Serial.print("Analog Degeri: ");
 Serial.print( ldrdeger);
  Serial.print("\n");
  
  float analogvoltaj=(float)5/1023*ldrdeger;
  Serial.print("Voltaj degeri: ");
  Serial.print( analogvoltaj);
  
  float LDR=direnc/analogvoltaj*(((float)5-analogvoltaj)/1000);
  Serial.print("LDR direnci: ");
  Serial.print( LDR);
  
  
}
