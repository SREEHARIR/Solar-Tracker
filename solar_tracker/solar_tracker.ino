
#include <Servo.h> // include Servo library 

Servo horizontal; // horizontal servo
int servoh ;//= 90;     // stand horizontal servo

Servo vertical;   // vertical servo 
int servov ;//= 90;     // stand vertical servo

// LDR pin connections
//  name  = analogpin;
int ldrlt = 2; //LDR top left
int ldrrt = 3; //LDR top rigt
int ldrld = 4; //LDR down left
int ldrrd = 5; //ldr down rigt

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

  int lt = analogRead(ldrlt); // top left
  int rt = analogRead(ldrrt); // top right
  int ld = analogRead(ldrld); // down left
  int rd = analogRead(ldrrd); // down rigt
    
  int avt = (lt + rt) / 2; // average value top
  int avd = (ld + rd) / 2; // average value down
  int avl = (lt + ld) / 2; // average value left
  int avr = (rt + rd) / 2; // average value right
  

    //int dtime = analogRead(4)/20; // read potentiometers  
  //int tol = analogRead(5)/4;

  int dtime = 12;
  int tol=20;
  
  int dvert = avt - avd; // check the diffirence of up and down
  int dhoriz = avl - avr;// check the diffirence og left and rigt
  
  Serial.print(lt);
  Serial.print("  ");
  Serial.print(rt);
  Serial.print("  ");
  Serial.print(ld);
  Serial.print("  ");
  Serial.print(rd);
  Serial.print("  ");
  Serial.print(dtime);
  Serial.print("  ");
  Serial.print(tol);
  Serial.print("  ");
  Serial.println();
//  delay(500);
    

}