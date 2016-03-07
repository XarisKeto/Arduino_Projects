int Adigit=2;
int Bdigit=3;
int Cdigit=4;
int Ddigit=5;
int dot=13;
int a=6;
int b=7;
int c=8;
int d=9;
int e=10;
int f=11;
int g=12;

void setup(){
  pinMode(Adigit,OUTPUT);
  pinMode(Bdigit,OUTPUT);
  pinMode(Cdigit,OUTPUT);
  pinMode(Ddigit,OUTPUT);
  pinMode(dot,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop(){
  //write YOLO(You Only Live Once)
  Y(Adigit);
  //delay(500);
  O(Bdigit);
  //delay(500);
  L(Cdigit);
  //delay(500);
  O(Ddigit);
  //delay(500);
}

void Y(int digit){
  digitalWrite(digit,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dot,HIGH);
  delay(500);
  digitalWrite(digit,LOW);
}
void O(int digit){
  digitalWrite(digit,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dot,HIGH);
  delay(500);
  digitalWrite(digit,LOW);
}
void L(int digit){
  digitalWrite(digit,HIGH);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dot,HIGH);
  delay(500);
  digitalWrite(digit,LOW);
}
  
  
