#include<Servo.h>

int incomingData;
int pin1=7;
Servo sun1;

void setup() {

Serial.begin(9600);


}
void loop() {

if (Serial.available()>0) {

   incomingData=Serial.read();
   if (incomingData == 'a'){
      pinMode(pin1, OUTPUT);
      delay(2000);
      sun1.attach(pin1);
      delay(2000);
      int angle1=20;
      sun1.write(angle1);
      delay(2000);
      sun1.detach();   
   } else if(incomingData != 'a'){
      pinMode(pin1, OUTPUT);
      delay(2000);
      sun1.attach(pin1);
      delay(2000);
      int angle2=0;
      sun1.write(angle2);
      delay(2000);
      sun1.detach();
   }
}





}
