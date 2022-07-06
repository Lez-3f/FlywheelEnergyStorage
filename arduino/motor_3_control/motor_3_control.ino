#include <Servo.h>
Servo esc;
int val;

void setup() {
  // put your setup code here, to run once:
  esc.attach(9);
  esc.writeMicroseconds(1000);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(A0);
  val=map(val,0,1023,1000,2000);
  Serial.println(val);
  esc.writeMicroseconds(val);
}
