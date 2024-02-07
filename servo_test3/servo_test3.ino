#include<Servo.h>

int pin1=7;
int angle1=-10;
Servo sun1;

void setup() {

pinMode(pin1, OUTPUT);
delay(2000);
sun1.attach(pin1);
delay(2000);


}

void loop() {


sun1.write(angle1);
delay(2000);
sun1.detach();


}
