int RA=2,RB=3,RC=4,RD=5,INH1=6,INH2=7;// 5=RA 4=RB 3=RC
void setup() {
  // put your setup code here, to run once:
  pinMode(RA,OUTPUT);
  pinMode(RB,OUTPUT);
  pinMode(RC,OUTPUT);
  pinMode(RD,OUTPUT);
  pinMode(INH1,OUTPUT);
  pinMode(INH2,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(8==HIGH)
 {digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(100);
digitalWrite(INH1,HIGH);
delay(100);}
if (9==LOW)
{digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(500);
digitalWrite(INH1,HIGH);
delay(500);}
if(10==HIGH)
{
  digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(1000);
digitalWrite(INH1,HIGH);
delay(1000);
  }
/*digitalWrite(INH1,LOW); 
digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
 delay(50); */
}
