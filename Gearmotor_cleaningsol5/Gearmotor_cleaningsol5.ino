#include<Servo.h>


 

int pin=8;
Servo servo;




void setup() {

Serial.begin(9600);




}



void loop() {



   if(Serial.available()){
    char str = Serial.read(); 
    if(str == 'h'){
     pinMode(pin,OUTPUT);
     delay(2000);
     servo.attach(pin);
     delay(2000);
     

     int angle=5;

     servo.write(angle);
   }

    if(str == 'm'){
     pinMode(pin,OUTPUT);
     delay(2000);
     servo.attach(pin);
     delay(2000);

     int angle=70;

     servo.write(angle);
   }

    if(str == 'l'){
     pinMode(pin,OUTPUT);
     delay(2000);
     servo.attach(pin);
     delay(2000);

     int angle=85;

     servo.write(angle);
   }

    if(str == 's'){
     servo.detach();
 
   }
  }




}

