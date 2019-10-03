#include <Servo.h>
#include <Stepper.h>
#include <String.h>
#include <math.h> 

//Servos
Servo alphaServo;
Servo bhetaServo;

//steps per revolution for stepper motor
const int stepsPerRevolution = 200; 
//Stepper
Stepper myStepper(stepsPerRevolution, 10, 11, 12, 13);

//Position
struct Point 
{
  float x;
  float y;
};
struct Point previous; 
float alpha;
float bheta;

struct Point fontSize;
int done = 1;
bool level = 0;
int verse = 0;

void setup() 
{
  Serial.begin(9600);
  alphaServo.attach(9);
  bhetaServo.attach(8);
  pinMode(7, INPUT);
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  fontSize.x = 20; //Horizontal size
  fontSize.y = 30; //Vertical size
 // base();
  delay(2000);
}

///////////////////////////////////////////&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


//Main loop of the program
/*  INSTRUCTION:
 *    1. In Setup choose fontSize
 *    2. Write word You want to Serial port screen
 *    3. You can change a werse of the workspace by using changeWerse(int)
 *        default werse is middle one (0) 
 *        if You want higer write positive number (1,2,3..) or negative if You want to write lower ( -1, -2, -3 ...)
 */

void loop() 
{
  
  while(done)
  {
    //changeWerse(2);
    String w = readWord();
    writeWord(w);
    Serial.print(w);
    //base();
    //done=0;
  }
  
}
