char recVal=0;//定義變數recVal

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//設置鮑率為9600 通迅速率
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {//收到數據時發送數據時
    recVal = Serial.read();//讀取PC機發送給Arduino的指令或字符，並將該指令或字符賦給recVal
    //Serial.println(recVal);
   switch(recVal)
   {
    case 'a':
      Serial.print("Hello");//顯示"Hello World!!"
     break;
    case 'b':
      Serial.print(" World");//顯示"Hello World!!"
     break;
    case 'c':
      Serial.print(" !!");//顯示"Hello World!!"
     break;
    default:
     Serial.println("error");
   }
  }
}
