

#include<Wire.h>
#include<LiquidCrystal.h>
#include<Keypad.h>
LiquidCrystal lcd(12,11,5,4,3,2);

#define FlamePin A1
#define buzzer 1





void setup() {
 
   pinMode(FlamePin, INPUT);
   pinMode(buzzer, OUTPUT);
  

}
void loop() {

//flame sensor-buzzer (yangın alarmı)
int Flame = digitalRead(FlamePin);

if(Flame==HIGH)
{
  digitalWrite(buzzer, HIGH);
  // delay(200);
}
else
{
 digitalWrite(buzzer, LOW); 
}

}
