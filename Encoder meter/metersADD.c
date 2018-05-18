#include <Wire.h>
#include "DFRobot_RGBLCD.h"

DFRobot_RGBLCD lcd(0x7c >> 1, 0xc0 >> 1, 16, 2);


//rgb_lcd lcd;

#define A 3
#define B 4
#define Key  12//key

#define D 79 //Diameter 79mm

float C = 0; //perimeter
unsigned int Distance;
int VA = 0;
int VB = 0;
unsigned long Count = 0;//count
unsigned int Count_1 = 0; //Negative count
unsigned char flag = 1, Mark = 0;
unsigned long lasttime = 0, Modetime = 0;

//Length measurement range is ± 6 M
void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.setRGB(255, 255,0);
  lcd.setCursor(2, 0 );
  lcd.print("M:");
  lcd.setCursor(2, 1 );
  lcd.print("D:");
  lcd.setCursor(12, 1 );
  lcd.print("cm");
  pinMode(A, INPUT_PULLUP); //Pull-up input
  pinMode(B, INPUT_PULLUP);
  pinMode(Key, INPUT);
  attachInterrupt(1, interrupt, RISING);
  C = D * PI;
}

void loop()
{
  if (millis() - 150 > lasttime)//Detect keys once every 150ms
  {
    if (digitalRead(Key) == HIGH)
      if (digitalRead(Key) == HIGH)
        Mark += 1;
    if (Mark > 2)
      Mark = 0;

    while (digitalRead(Key) == HIGH);
    lasttime = millis();
  }

  if (millis() - 100 > Modetime)//Refresh the data every 100ms
  {
    if (Mark == 0) //Cleared
    {
      lcd.setCursor(6, 0 );
      lcd.print("Reset    ");
      Distance = C * Count / 40;
      flag = 3;
      lcd.setCursor(11, 0 );
      lcd.print("     ");
    }

    if (Mark == 1) //Calculate the measured value
    {
      lcd.setCursor(6, 0 );
      lcd.print("Detection");//
      lcd.setCursor(4, 1 );
      if (Count > 0 && Count < 0xffff)//Determine whether the length is positive
      {
        lcd.print('-');//The length is negative
        Distance = C * Count / 40;
      }

      else if (Count == 0 && Count_1 == 0 )//Determine whether the length is zero
      {
        lcd.setCursor(4, 1 );
        lcd.print(' ');
        Distance = C * Count / 40;
      }

      else//Length is positive
      {
        lcd.print('+');
        Distance = Count_1 * C  / 40;
      }
    }

    else if (Mark == 2) //lock
    {
      lcd.setCursor(6, 0 );
      lcd.print("Lock     ");
      Count = 0;
      Count_1 = 0;
    }

    Modetime = millis();
  }



  lcd.setCursor(5, 1 );//Displays the value of Distance
  lcd.print(Distance / 10000);
  lcd.print((Distance / 1000) % 10);
  lcd.print((Distance / 100) % 10);
  lcd.print('.');
  lcd.print((Distance / 10) % 10);
  lcd.print(Distance % 10);
}

void interrupt()//Interrupt handler
{
  VB = digitalRead(B);
  if (Mark == 1)//Detects whether the current mode is a measurement
  {
    if (VB == 1)//To determine whether the positive measurement
    {
      flag = 1;

      if (Count > 0xffff)
      {
        Count_1 -= 1;
      }

      Count += 1;
    }

    else//Reverse measurement
    {
      flag = 0;
      Count -= 1;

      if (Count > 0xFFFF)
      {
        Count_1 += 1;
      }
    }

    //Count is cleared over the range
    if (Count < 0xFFFF && Count > 0x294A)
      Count = 0;

    else if (Count < 0xFFFFD6B5 && Count > 0xFFFF)
      Count = 0;
  }
}
