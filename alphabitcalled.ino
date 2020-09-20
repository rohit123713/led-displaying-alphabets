#define led1 13
#define led2 12
#define led3 11
#define led4 8
#define led5 9
#define led6 10
#define led7 A0
#define led8 A1
#define led9 A2
#define led10 5
#define led11 6
#define led12 7
#define led13 2
#define led14 3
#define led15 4
unsigned int del=30;
int wt = 1000;
int clt = 150;


void setup() {
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
pinMode(led11,OUTPUT);
pinMode(led12,OUTPUT);
pinMode(led13,OUTPUT);
pinMode(led14,OUTPUT);
pinMode(led15,OUTPUT);
}

void loop() {
pa();
clr1();
pb();
clr1();
pc();
clr1();
pd();
clr1();
pe();
clr1();
pf();
clr1();
pg();
clr1();
ph();
clr1();
pi();
clr1();
pj();
clr1();
pk();
clr1();
pl();
clr1();
pm();
clr1();
pn();
clr1();
po();
clr1();
pp();
clr1();
pq();
clr1();
pr();
clr1();
ps();
clr1();
pt();
clr1();
pu();
clr1();
pv();
clr1();
pw();
clr1();
px();
clr1();
py();
clr1();
pz();
clr1();
}

void pa(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
delay(wt);
}

void pb(){
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
delay(wt);
}

void pc(){
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pd(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
delay(wt);
}

void pe(){
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del); 
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
delay(wt);
}

void pf(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pg(){
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);

delay(wt);
}

void ph(){

digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del); 
digitalWrite(led7,HIGH);
delay(del); 
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
delay(wt);
}

void pi(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pj(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pk(){
digitalWrite(led13,HIGH);
delay(del);  
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led3,HIGH);
delay(del);
digitalWrite(led1,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);

delay(wt);
}

void pl(){
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
delay(wt);
}

void pm(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
delay(wt);
}

void pn(){
  digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
delay(wt);
}
void po(){
  digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
delay(wt);
}

void pp(){
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pq(){
  digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
delay(wt);
}

void pr(){
  digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
delay(wt);
}
void ps(){
 digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del); 
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
delay(wt);
}

void pt(){
  digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pu(){
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pv(){
  digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led14,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void pw(){
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led7,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led13,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led15,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void px(){
  digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
delay(wt);
}

void py(){
  digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
digitalWrite(led9,HIGH);
delay(del);
digitalWrite(led6,HIGH);
delay(del);
digitalWrite(led5,HIGH);
delay(del);
digitalWrite(led4,HIGH);
delay(del);
digitalWrite(led1,HIGH);
delay(del);
digitalWrite(led3,HIGH);
delay(del);
delay(wt);
}

void pz(){
  digitalWrite(led1,HIGH);
delay(del);
digitalWrite(led2,HIGH);
delay(del);
digitalWrite(led3,HIGH);
delay(del);
digitalWrite(led8,HIGH);
delay(del);
digitalWrite(led10,HIGH);
delay(del);
digitalWrite(led11,HIGH);
delay(del);
digitalWrite(led12,HIGH);
delay(del);
delay(wt);
}
void clr1(){
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
 digitalWrite(led5,LOW);
 digitalWrite(led6,LOW);
 digitalWrite(led7,LOW);
 digitalWrite(led8,LOW);
 digitalWrite(led9,LOW);
 digitalWrite(led10,LOW);
 digitalWrite(led11,LOW);
 digitalWrite(led12,LOW);
 digitalWrite(led13,LOW);
 digitalWrite(led14,LOW);
 digitalWrite(led15,LOW);
delay(clt);
}
