
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
} 

void loop()
{
  if(Serial.available())
  {
    char ch =Serial.read();
    if(ch == 'o')
    {
      Serial.println("OPEN LED");
      digitalWrite(13,HIGH);
    }
    else if(ch =='c')
    {
      Serial.println("CLOSE LED");
      digitalWrite(13,LOW);
    }
    else
    {
      int led = digitalRead(13);
      if (led == 1)
      {
      digitalWrite(13,!led);
      Serial.println("error CLOSE");
      }
      else
      {
         Serial.println("error");
      }
      
    }
  }

}
