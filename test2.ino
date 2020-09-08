void setup()
{
  Serial.begin(115200);
}

void loop() 
{
  if(Serial.available()) //判斷串列埠是否有文字
  {
    int num =Serial.parseInt(); //儲存輸入的文字
    Serial.print("Temp:C=");
    Serial.print(num);
    Serial.print("/F=");
    Serial.println(num*9/5+32); //先乘除後加減
  }
}
