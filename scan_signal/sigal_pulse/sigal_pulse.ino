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
}

void loop() {
  // put your main code here, to run repeatedly:
  int n,m;
  n= digitalRead(8);
  m= digitalRead(9);
 if(n==LOW&&m==LOW) 
  {digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(100);//0
 digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(100);//1 
  }
  if(n==HIGH&&m==LOW)
   {
    digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
   digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
   delay(200);//0
   digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
   delay(200); //1
   }
 if(n==LOW&&m==HIGH)
   {
    digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
   digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
   delay(300);//0
   digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
   delay(300); //1
   }
   if(n==HIGH&&m==HIGH)
   {
    digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
   digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
   delay(500);//0
   digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
   delay(500); //1
   }
   
}
