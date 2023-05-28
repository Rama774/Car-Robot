#include <AFMotor.h>
AF_DCMotor m1(1,MOTOR12_2KHZ);
AF_DCMotor m2(2,MOTOR12_2KHZ);
AF_DCMotor m3(3,MOTOR12_2KHZ);
AF_DCMotor m4(4,MOTOR12_2KHZ);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
m1.setSpeed(255);
m1.run(FORWARD);
m2.setSpeed(255);
m2.run(FORWARD);
m3.setSpeed(255);
m3.run(BACKWARD);
m4.setSpeed(255);
m4.run(BACKWARD);
delay(1000);
}
