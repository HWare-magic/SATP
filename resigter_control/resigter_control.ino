void setup() {
  // put your setup code here, to run once:
DDRD = B11111110; //将Arduino引脚1至7设置为输出，将引脚0设置为输入
DDRD = DDRD | B11111100; //这样更安全，因为它将引脚2到7设置为输出
                    //不改变引脚0和1的值，即RX和TX 

}

void loop() {
  // put your main code here, to run repeatedly:
PORTD = B10000110; // sets digital pins 7,5,3 HIGH

}
