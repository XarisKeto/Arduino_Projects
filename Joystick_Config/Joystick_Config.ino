//Joystick Example

int KEY=2;
int Y=A0;
int X=A1;

void setup(){
  pinMode(KEY,INPUT_PULLUP);
  pinMode(Y,INPUT);
  pinMode(X,INPUT);
  Serial.begin(9600);
}

//default times x
float x1=493.0;
float x2=492.0;
float x4=494.0;
float x3=491.0;
float x5=495.0;
//default times y
float y1=518.0;
float y2=519.0;
float y3=520.0;
float y4=517.0;
float y5=516.0;
//default times key
float key1=510.0;
float key2=509.0;
float key3=508.0;
float key4=511.0;
float key5=512.0;

void loop(){
  float x=analogRead(X);
  float y=analogRead(Y);
  float key=digitalRead(KEY);
  if(x!=x1 && x!=x2 && x!=x3 && x!=x4 && x!=x5){
    Serial.println("X:");
    Serial.println(x2);
  }
  if(y!=y1 && y!=y2 && y!=y3 && y!=y4 && y!=y5){
    Serial.println("Y:");
    Serial.println(y2);
  }
  if(key==LOW){
    Serial.println("KEY:");
    Serial.println(key);
  }
}
  
  
    
