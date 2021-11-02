//SMART CAR PARKING SYSTEM USING ARDUINO AND IR SENSOR
//AUTHOR:: SREEPARNA RAY
//DATE:: 30th October,2021

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  
#include <Servo.h> 

Servo myservo1;

int IR1 = 2;    //ENTRY
int IR2 = 4;    //EXIT

int Slot=4;     //TOTAL SLOT

int flag1 = 0;
int flag2 = 0;

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);

  myservo1.attach(3);
  myservo1.write(90);
  
  lcd.init();
  lcd.backlight();

  lcd.setCursor (0,0);
  lcd.print("   SMART CAR    ");
  lcd.setCursor (0,1);
  lcd.print(" PARKING SYSTEM ");
  delay (2000);
  lcd.clear();
}

void loop() {

  //When car is trying to entry in parking area.
  if(digitalRead (IR1) == LOW && flag1==0)
  {
    if(Slot>0)        //When Parking area is not full
    {
      flag1=1;
      if(flag2==0)
      {
        myservo1.write(0); 
        Slot = Slot-1;
      }
    }else             //When there is no parking slot
    {
      lcd.setCursor (0,0);
      lcd.print("    SORRY :(    ");  
      lcd.setCursor (0,1);
      lcd.print("  Parking Full  "); 
      delay (3000);
      lcd.clear(); 
    }
  }

  //When a car wants to exit
  if(digitalRead (IR2) == LOW && flag2==0)
  {
    flag2=1;
    if(flag1==0)
    {
      myservo1.write(0); 
      Slot = Slot+1;
    }
  }

  if(flag1==1 && flag2==1)
  {
    delay (1000);
    myservo1.write(90);
    flag1=0, flag2=0;
  }

  lcd.setCursor (0,0);
  lcd.print("    WELCOME!    ");
  lcd.setCursor (0,1);
  lcd.print("Slot Left: ");
  lcd.print(Slot);
}
