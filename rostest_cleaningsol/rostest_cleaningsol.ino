#include<Servo.h>
#include<ros.h>
#include<std_msgs/Float32.h>

ros::NodeHandle nh;

 
int pin1=10;
int pin2=7;
Servo sun1;
Servo sun2;

void servo_cb(const std_msgs::UInt16 & cmd_msg){

if(cmd_msg.data == 3){
     pinMode(pin1,OUTPUT);
     delay(2000);
     sun1.attach(pin1);
     delay(2000);
     pinMode(pin2,OUTPUT);
     delay(2000);
     sun2.attach(pin2);
     delay(2000);

     int angle2=5;

     sun2.write(angle2);
   }

    if(cmd_msg.data == 2){
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

    if(cmd_msg.data == 1){
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

    if(cmd_msg.data == 0){
     sun2.detach();
 
   }

}

ros::Subscriber<std_msgs::UInt16> sub("servo", servo_cb);

void setup() {

Serial.begin(9600);

nh.initNode();
nh.subscribe(sub);


}



void loop() {

nh.spinOnce();
delay(1);

}

