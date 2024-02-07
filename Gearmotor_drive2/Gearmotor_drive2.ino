#include<Servo.h>


 
int pin1=10;
int pin2=7;
Servo sun1;
Servo sun2;



void setup() {

Serial.begin(9600);



}



void loop() {


if (Serial.available()) {

   char incomingData=Serial.read();
   if (incomingData == 'a'){ 
          
          pinMode(pin1,OUTPUT);
          delay(2000);
          sun1.attach(pin1);
          delay(2000);
          pinMode(pin2,OUTPUT);
          delay(2000);
          sun2.attach(pin2);
          delay(2000);

          int angle2=85;

          sun2.write(angle2);       
    
   } 
   
   if(incomingData = 'c'){

           sun2.detach();

   } 
   
   if(incomingData = 'f'){
           pinMode(pin1,OUTPUT);
           delay(2000);
           sun1.attach(pin1);
           delay(2000);
           pinMode(pin2,OUTPUT);
           delay(2000);
           sun2.attach(pin2);
           delay(2000);

           int angle2=70;

           sun2.write(angle2);
   }
}
}


   