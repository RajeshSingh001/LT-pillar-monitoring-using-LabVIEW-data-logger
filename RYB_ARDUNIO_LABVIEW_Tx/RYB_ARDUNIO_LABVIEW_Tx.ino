// the setup routine runs once when you press reset:
const int buttonPin1 = 10;
const int buttonPin2 = 9;
const int buttonPin3 = 8;
  // the number of the pushbutton pin
//const int ledPin =  13;
int buttonState1=0;
int buttonState2=0;
int buttonState3=0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  // initialize serial communication at 9600 bits per second:
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
 
}

// the loop routine runs over and over again forever:
void loop() 
{  
  buttonState1 = digitalRead(buttonPin1);
   buttonState2 = digitalRead(buttonPin2);
    buttonState3 = digitalRead(buttonPin3);
    // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if((buttonState1 == LOW)&&(buttonState2 == LOW)&&(buttonState3 == LOW))
  { 
   lcd.clear();     
   int FSR1=10;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("RYB NOT OK");
   delay(50);
  } 
  
  else if((buttonState1 == LOW)&&(buttonState2 == LOW)&&(buttonState3 == HIGH))
  { 
   lcd.clear();     
   int FSR1=20;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("RY NOT OK");
   lcd.setCursor(0,1);
   lcd.print("B OK");
   delay(50);
  } 
  
   else if((buttonState1 == LOW)&&(buttonState2 == HIGH)&&(buttonState3 == LOW))
  { 
   lcd.clear();     
   int FSR1=30;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("RB NOT OK");
    lcd.setCursor(0,1);
   lcd.print("Y OK");
   delay(50);
  } 
   else if((buttonState1 == LOW)&&(buttonState2 == HIGH)&&(buttonState3 == HIGH))
  { 
   lcd.clear();     
   int FSR1=40;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("R NOT OK");
    lcd.setCursor(0,1);
   lcd.print("YB OK");
   delay(50);
  } 
  
   else if((buttonState1 == HIGH)&&(buttonState2 == LOW)&&(buttonState3 == LOW))
  { 
   lcd.clear();     
   int FSR1=50;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("R OK");
    lcd.setCursor(0,1);
   lcd.print("YB NOT OK");
   delay(50);
  } 
  
   else if((buttonState1 == HIGH)&&(buttonState2 == LOW)&&(buttonState3 == HIGH))
  { 
   lcd.clear();     
   int FSR1=60;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("RB OK");
    lcd.setCursor(0,1);
   lcd.print("Y NOT OK");
   delay(50);
  } 
  
   else if((buttonState1 == HIGH)&&(buttonState2 == HIGH)&&(buttonState3 == LOW))
  { 
   lcd.clear();     
   int FSR1=70;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("RY OK");
   lcd.setCursor(0,1);
   lcd.print("B NOT OK");
   delay(50);
  }
 
  else if((buttonState1 == HIGH)&&(buttonState2 == HIGH)&&(buttonState3 == HIGH))
  { 
   lcd.clear();     
   int FSR1=80;
   Serial.write(FSR1); 
   lcd.setCursor(0,0);
   lcd.print("RYB OK");
   delay(50);
  }  
 
  delay(10);
  }
