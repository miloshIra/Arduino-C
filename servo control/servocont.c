#include <LiquidCrystal.h>
#include <Stepper.h>


const int stepsPerRevolution = 255;

Stepper myStepper(stepsPerRevolution, 4, 5, 6, 7);
char data;

LiquidCrystal ldc(8, 9, 10, 11, 12, 13);

void setup(){

  myStepper.setSpeed(60);
  Serial.begin(9600);

lcd.begin(20, 4);

lcd.setCursor(3,0);
lcd.print("Stepper motor");

delay(3000);

lcd.clear ();

}

void loop() {

  if(Serial.available())
  {
    data = Serial.read();
  }

   if(data == 'C'){Clockwise();}
   if(data == 'A'){AnitClockwise();}
   if(data == 'S')
   {
     data = 0;
     lcd.setCursor(3,0);
     lcd.print("No rotation");
   }
}
