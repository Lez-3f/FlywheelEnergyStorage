const int led = 13;
int i = 0;
int j = 0;
int C = 10;
int in_loop_num = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 灯光闪烁
  for (i = 0; i < C; ++i){
    for (j = 0; j < in_loop_num; ++j){
    digitalWrite(13, LOW);
    delay(i);
    digitalWrite(13, HIGH);
    delay(C-i);
    }
  }
  for (i = C; i > 0; --i){
    for (j = 0; j < in_loop_num; ++j){
    digitalWrite(13, LOW);
    delay(i);
    digitalWrite(13, HIGH);
    delay(C-i);
    }
  }
  
}
