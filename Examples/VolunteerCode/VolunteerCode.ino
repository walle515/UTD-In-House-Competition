//Include PWM_MotorController library
#include <PWM_MotorController.h>

//Create a PWM_MotorController called motor on pin 3,4, and 5
//RightMotor
// Pin 3: ENA
// Pin 4: In 1
// Pin 5: In 2
//LeftMotor
// Pin 9: ENB
// Pin 10: In 3
// Pin 11: In 4
PWM_MotorController rightMotor = PWM_MotorController(3,4,5);
PWM_MotorController leftMotor = PWM_MotorController(9,10,11);

long randNum, randNum2;

void setup() {
  //Setup Serial
  Serial.begin(9600);
  randomSeed(analogRead(0));
  Serial.println("Starting...");
}

void loop() {
  randnum2 = random(9);
  randNum = random(10);
  randNum = randNum * 100;
  Serial.println(randNum);

  switch((int)randNum2){
    case 0:
      rightMotor.writeToMotor(100);
      leftMotor.writeToMotor(100);
      delay(randNum);
      break;
    case 1:
      rightMotor.writeToMotor(100);
      leftMotor.writeToMotor(0);
      delay(randNum);
      break;
    case 2:
      rightMotor.writeToMotor(0);
      leftMotor.writeToMotor(100);
      delay(randNum);
      break;
    case 3:
      rightMotor.writeToMotor(-100);
      leftMotor.writeToMotor(-100);
      delay(randNum);
      break;
    case 4:
      rightMotor.writeToMotor(-100);
      leftMotor.writeToMotor(100);
      delay(randNum);
      break;
    case 5:
      rightMotor.writeToMotor(100);
      leftMotor.writeToMotor(-100);
      delay(randNum);
      break;
    case 6:
      rightMotor.writeToMotor(-100);
      leftMotor.writeToMotor(0);
      delay(randNum);
      break;
    case 7:
      rightMotor.writeToMotor(0);
      leftMotor.writeToMotor(-100);
      delay(randNum);
      break;
    case 8:
      rightMotor.writeToMotor(0);
      leftMotor.writeToMotor(0);
      delay(randNum);
      break;
    default:
      Serial.println("Error in switch case");
      delay(1000);
  }

}
