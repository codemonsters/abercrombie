/*
    Abercrombie
    Four-legged didactic and minimalistic robot / Robot cuadrúpedo didáctico y minimalista
    www.codemonsters.es
*/

#include <Servo.h>

#define FORWARD_SERVO_PIN 8 // pin used to control forward servo
#define REAR_SERVO_PIN 9  // pin used to control rear servo
#define FORWARD_SERVO_CENTER 70  // center position of the forward servo, from 0 to 180
#define REAR_SERVO_CENTER 80     // center position of the rear servo, from 0 to 180
#define FORWARD_MOVEMENT_FACTOR 0.5  // a value between 0 and 1 (make it low to reduce the travel of the forward legs while moving)
#define REAR_MOVEMENT_FACTOR 0.5    // a value between 0 and 1  (make it low to reduce the travel of the rear legs while moving)
#define DELAY_BETWEEN_SERVO_MOVEMENTS 250 // miliseconds to wait between servo movements

Servo forwardServo, rearServo;
int forwardServoMaxRotation = 0;
int rearServoMaxRotation = 0;

void setup()
{
  // Estimate the maximum degrees of movement we have in each servo taking in count the center position defined above (the biggest the defined center is from 90 degrees, the less free degreess we will have)
  if (FORWARD_SERVO_CENTER > 90) {
    forwardServoMaxRotation = 180 - FORWARD_SERVO_CENTER;
  } else {
    forwardServoMaxRotation = FORWARD_SERVO_CENTER;
  }
  if (REAR_SERVO_CENTER > 90) {
    rearServoMaxRotation = 180 - REAR_SERVO_CENTER;
  } else {
    rearServoMaxRotation = REAR_SERVO_CENTER;
  }
  
  // initialize the servos
  forwardServo.attach(FORWARD_SERVO_PIN);
  rearServo.attach(REAR_SERVO_PIN);

  // move both servos to the center position
  standingPosition();

  delay(1000);
}


void loop()
{
  // Add the movements you want your robot to follow
  walkForward();
  //turnLeft();
  //turnRight();
  //walkBackwards();
}

// Walk one step forward
void walkForward(){
    forwardServo.write(FORWARD_SERVO_CENTER + forwardServoMaxRotation * FORWARD_MOVEMENT_FACTOR);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
    rearServo.write(REAR_SERVO_CENTER - rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
    forwardServo.write(FORWARD_SERVO_CENTER - forwardServoMaxRotation * FORWARD_MOVEMENT_FACTOR);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
    rearServo.write(REAR_SERVO_CENTER + rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
    delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
}

// Turn one step left
void turnLeft() {
  forwardServo.write(FORWARD_SERVO_CENTER);
  rearServo.write(REAR_SERVO_CENTER - rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  forwardServo.write(FORWARD_SERVO_CENTER - forwardServoMaxRotation * FORWARD_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  rearServo.write(REAR_SERVO_CENTER + rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
}

// Turn one step right
void turnRight() {
  forwardServo.write(FORWARD_SERVO_CENTER);
  rearServo.write(REAR_SERVO_CENTER + rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  forwardServo.write(FORWARD_SERVO_CENTER + forwardServoMaxRotation * FORWARD_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  rearServo.write(REAR_SERVO_CENTER - rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
}

// Walk one step back
void walkBackwards() {
  forwardServo.write(FORWARD_SERVO_CENTER);
  rearServo.write(REAR_SERVO_CENTER + rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  forwardServo.write(FORWARD_SERVO_CENTER - forwardServoMaxRotation * FORWARD_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  rearServo.write(REAR_SERVO_CENTER - rearServoMaxRotation * REAR_MOVEMENT_FACTOR);
  delay(DELAY_BETWEEN_SERVO_MOVEMENTS);
  
}

void standingPosition() {
  forwardServo.write(FORWARD_SERVO_CENTER);
  rearServo.write(REAR_SERVO_CENTER);
}
