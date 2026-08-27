#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int potPin1 = A0;
const int potPin2 = A1;
const int potPin3 = A2;
const int potPin4 = A3;

const int servoPin1 = 11;
const int servoPin2 = 10;
const int servoPin3 = 9;
const int servoPin4 = 6;

void setup() {
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
}

void loop() {
  int val1 = map(analogRead(potPin1), 0, 1023, 0, 180);
  int val2 = map(analogRead(potPin2), 0, 1023, 0, 180);
  int val3 = map(analogRead(potPin3), 0, 1023, 0, 180);
  int val4 = map(analogRead(potPin4), 0, 1023, 0, 180);

  servo1.write(val1);
  servo2.write(val2);
  servo3.write(val3);
  servo4.write(val4);

  delay(15);
}
