const int analogInPin = A0;
const int analogOutPin = 9;
int sensorValue = 0;
int outputValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
// 读取旋转电位计的数值
  sensorValue = analogRead(analogInPin);
// 转换电位计的数值范围，
// 将0～1023数值范围映射到0～255
  outputValue = map(sensorValue, 0, 1023, 0, 255);
// 将转换后的数值，应用给LED神灯，
// 以此控制LED神灯的亮度。
  analogWrite(analogOutPin, outputValue);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("    output = ");
  Serial.println(outputValue);
  
  delay(2);
}



 







 
