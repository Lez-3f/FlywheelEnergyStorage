#include <Servo.h>
// Arduino舵机驱动库 #include <Servo.h>
Servo servo;  
void setup() {
      servo.attach(10);  // 舵机信息线连接位置
}

void loop() {
     for (int pos = 0; pos <= 120; pos++) {
         servo.write(pos);  // 写舵机旋转角度
         delay(10);   // 等待舵机旋转完成
    }
    delay(1000);
    for (int pos = 120; pos >=0; pos--) {
        servo.write(pos);
        delay(10);
    }
    delay(1000);
}
