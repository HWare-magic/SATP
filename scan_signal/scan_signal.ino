int RA=2,RB=3,RC=4,RD=5,INH1=6,INH2=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(RA,OUTPUT);
  pinMode(RB,OUTPUT);
  pinMode(RC,OUTPUT);
  pinMode(RD,OUTPUT);
  pinMode(INH1,OUTPUT);
  pinMode(INH2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,LOW);
  digitalWrite(RD,LOW);digitalWrite(INH1,LOW);digitalWrite(INH2,LOW);
  delay(4000);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,LOW);
  digitalWrite(RD,LOW);digitalWrite(INH1,HIGH);digitalWrite(INH2,LOW);
  delay(20);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,LOW);
  digitalWrite(RD,LOW);digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
  delay(20);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,LOW);
  digitalWrite(RD,HIGH);digitalWrite(INH1,HIGH);digitalWrite(INH2,LOW);
  delay(20);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,LOW);
  digitalWrite(RD,HIGH);digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
  delay(20);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,HIGH);
  digitalWrite(RD,LOW);digitalWrite(INH1,HIGH);digitalWrite(INH2,LOW);
  delay(20);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,HIGH);
  digitalWrite(RD,LOW);digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
    delay(20);
  digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,HIGH);
  digitalWrite(RD,HIGH);digitalWrite(INH1,HIGH);digitalWrite(INH2,LOW);
   delay(20);
   digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,HIGH);
  digitalWrite(RD,HIGH);digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
}
