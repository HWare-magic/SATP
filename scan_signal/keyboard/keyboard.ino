/*
 Name:		keyboard.ino
 Created:	2021/4/30 9:31:25
 Author:	dell
*/

#define BLINKER_WIFI

#include <Blinker.h>

#include <Wire.h> 
char auth[] = "fa2a4a143a9b";//87f5aff4b605  b23a31267142
char ssid[] = "HUAWEI";//HUAWEI
char pswd[] = "123456987";//123456987
// the setup function runs once when you press reset or power the board
BlinkerNumber Number3("pulse width");
int a = 300;
//int RA = D3, RB = D4, RC = D5, RD = D6, INH1 = D7, INH2 = D8;// 5=RA 4=RB 3=RC
int  RA = 6, RB = 7;
void setup() {
	pinMode(D6, OUTPUT);
	pinMode(D7, OUTPUT);
/*	pinMode(RA, OUTPUT);
	pinMode(RB, OUTPUT);
	pinMode(RC, OUTPUT);
	pinMode(RD, OUTPUT);
	pinMode(INH1, OUTPUT);
	pinMode(INH2, OUTPUT);
	pinMode(9, INPUT);
	pinMode(10, INPUT);*/ 
	Serial.begin(115200);
	//BLINKER_DEBUG.stream(Serial);
	Blinker.begin(auth, ssid, pswd);
	Blinker.attachData(dataRead);
	Blinker.attachHeartbeat(heartbeat);
	// RV.attach(RV_callback);//刷新按钮    注册回调函数
	//Blinker.attachDataStorage(dataStorage);//调用云函数
}
void heartbeat() {
	Number3.print(a); //放loop里没反应
	//Number4.print(qita_read);
}
// the loop function runs over and over again until power down or reset
void loop() {
	Blinker.run();
	Serial.println(a);
	
	digitalWrite(D6, HIGH);digitalWrite(D7, HIGH);
	delay(a);
	digitalWrite(D6, LOW);digitalWrite(D7, HIGH);
	delay(a);  //两个pin
	//digitalWrite(INH1, LOW);digitalWrite(INH2, HIGH);
	//digitalWrite(RD, LOW);digitalWrite(RC, LOW); digitalWrite(RB, LOW); digitalWrite(RA, LOW);
	//delay(a);//0
	//digitalWrite(RD, LOW);digitalWrite(RC, LOW); digitalWrite(RB, LOW); digitalWrite(RA, HIGH);
	//delay(a);//1
}
void dataRead(const String& data)//输入框
{

	BLINKER_LOG("Blinker readString: ", data);//data为输入数据
	a = data.toFloat();//a为修改的阈值

}