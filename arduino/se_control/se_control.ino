#include<Servo.h>
Servo myservo;  
 //创建一个舵机控制对象  

int potpin =A0;  //该变量用于存储用电位器读出的模拟值
int sval = 0;
int oval = 0;    
// 该变量用与存储舵机角度位置  

void setup() 
{ 
  myservo.attach(10);  
  Serial.begin(9600);
// 该舵机由arduino第九脚控制  
} 


void loop() 
{ 
  sval = analogRead(potpin);            //读取电位器控制的模拟值 (范围在0-1023) 

  oval = map(sval, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 

  myservo.write(oval);
  delay(15);                        
// 指定舵机转向的角度 
  Serial.print("sensor = ");
  Serial.print(sval);
  Serial.print("    output = ");
  Serial.println(oval);
  delay(2);                     
// 等待15ms让舵机到达指定位置   
}
