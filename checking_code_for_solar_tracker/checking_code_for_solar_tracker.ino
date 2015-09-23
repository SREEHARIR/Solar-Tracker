#include <Servo.h>

Servo horizontal; // horizontal servo
int servoh = 90;     // stand horizontal servo

Servo vertical;   // vertical servo 
int servov = 90;     // stand vertical servo

int ldrlt = 2; //LDR top left
int ldrrt = 3; //LDR top rigt
int ldrld = 4; //LDR down left
int ldrrd = 5; //ldr down rigt

int x=1;

void setup()
{
  Serial.begin(9600);
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

  servoh = 0;
  servov =  90;

 // vertical.write(servov);
 // horizontal.write(servoh);
  
  if(x==1)
  {
    Serial.print(lt);
    Serial.print("  ");
    Serial.print(ld);
    Serial.print("  ");
    Serial.print(rt);
    Serial.print("  ");
    Serial.print(rd);
    Serial.print("  ");
    Serial.println();
  }
 // delay(1000);
}
