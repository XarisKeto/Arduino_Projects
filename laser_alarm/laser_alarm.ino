int ldr=0;
int alarm=3;
int nobodyPass=0;
float sinVal;
int toneVal;
int button=7;

void setup() {
  pinMode(alarm, OUTPUT);
  Serial.begin(9600);
  pinMode(button,INPUT);
}

void loop(){
  Serial.println(analogRead(ldr));
  if(digitalRead(button)==HIGH){
    if(analogRead(ldr) > 900 && nobodyPass==0){
      analogWrite(alarm, 0); //o sinagermos se katastasi iremias
    } else{
     // digitalWrite(alarm, HIGH);//o sinagermos xtipa
         for(int x=0; x<180; x++){
              // convert degrees to radians then obtain value
              sinVal = (sin(x*(3.1412/180)));
              // generate a frequency from the sin value
              toneVal = 2000+(int(sinVal*1000));
              tone(alarm, toneVal);
              delay(2); 
       }   
      nobodyPass=1;//akoma kai an to laser ksanaxtipisei panw tou
    }
  }else{
    noTone(alarm);
    nobodyPass=0;
  }
}
