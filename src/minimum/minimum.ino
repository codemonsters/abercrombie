/*
    Abercrombie
    Four-legged didactic and minimalistic robot / Robot cuadrúpedo didáctico y minimalista
    www.codemonsters.es
*/

#include <Servo.h>

#define FORWARD_SERVO_PIN 8 // pin used to control forward servo
#define REAR_SERVO_PIN 9  // pin used to control rear servo
#define DELAY_BETWEEN_SERVO_MOVEMENTS 250 // miliseconds to wait between servo movements

Servo forwardServo, rearServo;

void setup()
{
  // initialize the servos
  forwardServo.attach(FORWARD_SERVO_PIN);
  rearServo.attach(REAR_SERVO_PIN);
  
  // move both servos to the center position
  forwardServo.write(90);
  rearServo.write(90);

  delay(1000);  // wait before start moving
}


void loop()
{
    // walk forward
    forwardServo.write(120);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
    rearServo.write(40);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
    forwardServo.write(60);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
    rearServo.write(140);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
}
