#include<Servo.h>

int pin1=4;
int angle1=70;
Servo sun1;
int pin2=7;
int angle2=90;
Servo sun2;
int incomingData;

void setup() {
Serial.begin(9600);
pinMode(pin1, OUTPUT);
delay(2000);
sun1.attach(pin1);
delay(2000);
pinMode(pin2, OUTPUT);
delay(2000);
sun1.attach(pin2);
delay(2000);

}

void loop() {

if (Serial.available()>0) {

   incomingData=Serial.read();
   if (incomingData == 'a'){
      sun1.write(angle1);
      delay(2000);
      sun1.detach();
      delay(1000);
      sun2.write(angle2);
      delay(2000);
      sun2.detach();
   } else if(incomingData != 'a'){
      sun1.write(0);
      delay(2000);
      sun1.detach();
      delay(1000);
      sun2.write(0);
      delay(2000);
      sun2.detach();
   }
}




}
