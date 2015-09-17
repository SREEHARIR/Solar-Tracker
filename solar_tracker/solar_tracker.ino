
#include <Servo.h> // include Servo library 

Servo horizontal; // horizontal servo
int servoh ;//= 90;     // stand horizontal servo

Servo vertical;   // vertical servo 
int servov ;//= 90;     // stand vertical servo

void setup()
{
  Serial.begin(9600);
// servo connections
// name.attacht(pin);
  horizontal.attach(9); 
  vertical.attach(10);
}


void loop() 
{
}