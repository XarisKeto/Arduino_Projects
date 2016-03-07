//oi pinakes [ane simfona me to setup twn pins
int matrix[8][9]={
 {2,10,11,12,13,A0,A1,A2,A3}, //r[row][0=epilogi row,1-9=epilogi collum]
 {3,10,11,12,13,A0,A1,A2,A3},
 {4,10,11,12,13,A0,A1,A2,A3},
 {5,10,11,12,13,A0,A1,A2,A3},
 {6,10,11,12,13,A0,A1,A2,A3},
 {7,10,11,12,13,A0,A1,A2,A3},
 {8,10,11,12,13,A0,A1,A2,A3},
 {9,10,11,12,13,A0,A1,A2,A3}
};

void setup(){
  pinMode(2,OUTPUT);//R1(ROW1)
  pinMode(3,OUTPUT);//R2
  pinMode(4,OUTPUT);//R3
  pinMode(5,OUTPUT);//R4
  pinMode(6,OUTPUT);//R5
  pinMode(7,OUTPUT);//R6
  pinMode(8,OUTPUT);//R7
  pinMode(9,OUTPUT);//R8
  pinMode(10,OUTPUT);//C1(COLLUM1)
  pinMode(11,OUTPUT);//C2
  pinMode(12,OUTPUT);//C3
  pinMode(13,OUTPUT);//C4
  pinMode(A0,OUTPUT);//C5-AO(DIGITAL OUTPUT);
  pinMode(A1,OUTPUT);//C6-A1(DIGITAL OUTPUT);
  pinMode(A2,OUTPUT);//C7-A2(DIGITAL OUTPUT);
  pinMode(A3,OUTPUT);//C8-A3(DIGITAL OUTPUT);
}

void writeMatrix(int array[8][8]){//use this method to write to matrix
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(array[i][j]==1){
        ledOpen(matrix[i][0],matrix[i][j+1]);
      }
    }
  }
}

void ledOpen(int row,int collum){
  digitalWrite(row,HIGH);
  digitalWrite(collum,LOW);
  delay(1);
  ledClose(row,collum);
}

void ledClose(int row,int collum){
  digitalWrite(row,LOW);
  digitalWrite(collum,HIGH);
}

void clearMatrix(){
  for(int i=0;i<8;i++){
    for(int j=1;j<9;j++){
      ledClose(matrix[i][0],matrix[i][j]);
    }
  }
}

void loop(){
  delay(1000);
  x(1000);
  a(1000);
  r(1000);
  h(1000);
  s(1000);
}

void x(long time){
  long time2=millis()+time;
  while(time2>millis()){
    int mychar[8][8]={
        {1,0,0,0,0,0,0,1},
        {0,1,0,0,0,0,1,0},
        {0,0,1,0,0,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,1,0,0,1,0,0},
        {0,1,0,0,0,0,1,0},
        {1,0,0,0,0,0,0,1}
    };
    writeMatrix(mychar);
  }
}

void a(long time){
  long time2=millis()+time;
  while(time2>millis()){
    int mychar[8][8]={
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1}
    };
    writeMatrix(mychar);
  }
}

void r(long time){
  long time2=millis()+time;
  while(time2>millis()){
    int mychar[8][8]={
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0}
    };
    writeMatrix(mychar);
  }
}

void h(long time){
  long time2=millis()+time;
  while(time2>millis()){
    int mychar[8][8]={
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1}
    };
    writeMatrix(mychar);
  }
}

void s(long time){
  long time2=millis()+time;
  while(time2>millis()){
    int mychar[8][8]={
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0},
        {0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0},
        {1,1,1,1,1,1,1,1}
    };
    writeMatrix(mychar);
  }
}

void face(long time){
  long time2=millis()+time;
  while(time2>millis()){
    int mychar[8][8]={
        {0,0,0,1,1,0,0,0},
        {0,0,1,0,0,1,0,0},
        {0,1,0,0,0,0,1,0},
        {1,0,1,0,0,1,0,1},
        {1,0,0,0,0,0,0,1},
        {0,1,0,1,1,0,1,0},
        {0,0,1,0,0,1,0,0},
        {0,0,0,1,1,0,0,0}
    };
    writeMatrix(mychar);
  }
}

void cube(){
    int mychar[8][8]={
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0}
    };
    writeMatrix(mychar);
    delay(500);
    int mychar2[8][8]={
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,1,1,1,1,0,0},
        {0,0,1,0,0,1,0,0},
        {0,0,1,0,0,1,0,0},
        {0,0,1,1,1,1,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0}
    };
    writeMatrix(mychar2);
    delay(500);
    int mychar3[8][8]={
        {0,0,0,0,0,0,0,0},
        {0,1,1,1,1,1,1,0},
        {0,1,0,0,0,0,1,0},
        {0,1,0,0,0,0,1,0},
        {0,1,0,0,0,0,1,0},
        {0,1,0,0,0,0,1,0},
        {0,1,1,1,1,1,1,0},
        {0,0,0,0,0,0,0,0}
    };
    writeMatrix(mychar3);
    delay(500);
    int mychar4[8][8]={
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1}
    };
    writeMatrix(mychar4);
}

