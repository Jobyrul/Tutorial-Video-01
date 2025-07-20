#include <LiquidCrystal.h> 
int Contrast=80;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

 void setup()
 {
    analogWrite(7,Contrast);
     lcd.begin(16, 2);
 } 
     void loop()
 {
   
     lcd.setCursor(1, 0);
     lcd.print("  HELLO WORLD  ");
   
    lcd.setCursor(1, 1);
     lcd.print("SUBSCRIBE ROBO REFLEX");

   lcd.scrollDisplayLeft();
   delay(200); 
   

   
}
