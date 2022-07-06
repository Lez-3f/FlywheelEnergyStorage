const int motorPin = 10;
const int analogoutPin = A0;
int sersonValue = 0;
int outputValue = 0;
void setup(){
  Serial.begin(9600);
  //将motorPin设置为OUTPUT 
  pinMode(motorPin,OUTPUT); 
  
}

void loop(){
  //在onTime = 3000时打开电机的毫秒;
  //关闭电机的时间为offTime = 3000;
  //打开电机（全速）
  sersonValue = analogRead (analogoutPin);
  outputValue = map(sersonValue,0,1023,0,255);
  analogWrite(motorPin,outputValue);
  //延迟onTime毫秒延迟（onTime）;
  //关闭
  delay(5);
  //digitalWrite(motorPin,LOW);
  //延迟offTime毫秒延迟（offTime）;
  //delay(5000); 
  Serial.print("sersonValue=");
  Serial.print(sersonValue);
  Serial.print("    outputValue=");
  Serial.println(outputValue);
  delay(100);
}
