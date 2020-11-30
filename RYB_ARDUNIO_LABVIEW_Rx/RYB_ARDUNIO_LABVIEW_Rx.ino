// the setup routine runs once when you press reset:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // initialize serial communication at 9600 bits per second:
  lcd.begin(16,2);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() 
{  
  int FSR1 = Serial.read();;
   // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if(FSR1 == 10) 
  { 
   lcd.clear();     
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("RYB NOT OK");
   delay(50);
  } 
  
   else if(FSR1 == 20) 
  { 
   lcd.clear();
   int FSR1=20;   
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("RY NOT OK");
   lcd.setCursor(0,1);
   lcd.print("B OK");
   delay(50);
  } 
  
   else if(FSR1 == 30) 
  { 
   lcd.clear();
   int FSR1=30;    
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("RB NOT OK");
    lcd.setCursor(0,1);
   lcd.print("Y OK");
   delay(50);
  } 
  
  else if(FSR1 == 40) 
  { 
   lcd.clear();
   int FSR1=40;    
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("R NOT OK");
    lcd.setCursor(0,1);
   lcd.print("YB OK");
   delay(50);
  }  
  
  else if(FSR1 == 50) 
  { 
   lcd.clear();
   int FSR1=50;    
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("R OK");
    lcd.setCursor(0,1);
   lcd.print("YB NOT OK");
   delay(50);
  }   
  
   else if(FSR1 == 60) 
  { 
   lcd.clear();
   int FSR1=60;    
   Serial.print("FSR1:");
   Serial.println(FSR1);
    lcd.setCursor(0,0);
   lcd.print("RB OK");
    lcd.setCursor(0,1);
   lcd.print("Y NOT OK");
   delay(50);
  }  
 
   else if(FSR1 == 70) 
  { 
   lcd.clear();
   int FSR1=70;    
   Serial.print("FSR1:");
   Serial.println(FSR1);
     lcd.setCursor(0,0);
   lcd.print("RY OK");
   lcd.setCursor(0,1);
   lcd.print("B NOT OK");
   delay(50);
  }  
  
   else if(FSR1 == 80) 
  { 
   lcd.clear();
   int FSR1=80;    
   Serial.print("FSR1:");
   Serial.println(FSR1);
   lcd.setCursor(0,0);
   lcd.print("RYB OK");
   delay(50);
  }  
  
  
 delay(10);
}
