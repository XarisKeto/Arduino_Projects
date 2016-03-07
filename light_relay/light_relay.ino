#include <IRremote.h>
//FD00FF=ON/OFF
//FD807F=VOL +
//FD90FF=VOL -
//FDA05F=PLAY
//D0529225=FORWARD
//FD20DF=BACKWARD
//FD40BF=STOP
//FD50AF=UP
//FD10EF=DOWN
//FDB04F=EQ
//FD708F=ST/REPT
//FD30CF=0 , FD08F7=1 , FD8877=2 , FD48B7=3 , FD28D7=4 , FDA857=5
//FD6897=6 , FD18E7=7 , FD9867=8 , FD58A7=9

int RECV_PIN = 11;//to pin pou sindeoume to receiver
IRrecv irrecv(RECV_PIN);
decode_results results;
int light=2;

void setup()
{
  irrecv.enableIRIn(); // Start the receiver
  pinMode(light,OUTPUT);
}

long playLight=0xFDA05F;
long stopLight=0xFD40BF;

void loop() {
 long ps=RCcode();
 if(ps==playLight){
   digitalWrite(light,HIGH);
   ps=0;
 }
 if(ps==stopLight){
   digitalWrite(light,LOW);
   ps=0;
 }
}
//kalontas tin methodo RCcode,pairneis se HEX ton kwdiko tou koumpiou
long RCcode(){
  long result=0;  
  if (irrecv.decode(&results)) {
     //Serial.println(results.value,HEX);
     result=results.value ;
     irrecv.resume(); // Receive the next value
    }
    return result;
}
