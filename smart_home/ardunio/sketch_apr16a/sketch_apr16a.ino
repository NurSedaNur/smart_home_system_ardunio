
#include<Wire.h>
#include<LiquidCrystal.h>
#include<Keypad.h>
LiquidCrystal lcd(12,11,5,4,3,2);

#define FlamePin A1

int     sensor      = 8;
boolean sensorValue = 0;
int     tetik       = 7;



void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(tetik, OUTPUT);
  Serial.println("Started...");
  //delay(10);

}

void loop() {
  // put your main code here, to run repeatedly:
//pır sensor-lamp için
  sensorValue = digitalRead(sensor);
  Serial.println("Sensor Value="+String(sensorValue));
  //delay(100);

  if (sensorValue == 1) {
    digitalWrite(tetik, HIGH);

  } else {
    digitalWrite(tetik, LOW);
  }
}
