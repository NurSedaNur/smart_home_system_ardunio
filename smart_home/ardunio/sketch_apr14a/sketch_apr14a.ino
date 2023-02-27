//Seda Nur EKİCİ  200201050

#include<Wire.h>
#include<LiquidCrystal.h>
#include<Keypad.h>
LiquidCrystal lcd(12,11,5,4,3,2);

#define FlamePin A1
#define buzzer 1



int     sensor      = 8;
boolean sensorValue = 0;
int     tetik       = 7;

int lm35Pin=A0;
float sicaklik_gerilim=0;
float sicaklik=0;
int okunan_deger=0;

const byte ROWS=4;
const byte COLS=3;
#define Password_Legenth 5
char Data[Password_Legenth];
char Master[Password_Legenth]="1234";
byte data_count=0,master_count=0;
//bool Pass_is_good;
char customKey;
int red=21;
int green=0;



char hexaKeys[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
  };
        byte rowPins[ROWS]={17,18,19,20};
        byte colPins[COLS]={16,15,14};
        Keypad customKeypad(makeKeymap(hexaKeys),rowPins,colPins,ROWS,COLS);
        






void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(tetik, OUTPUT);
  Serial.println("Started...");
  //delay(10);

  lcd.begin(16,2);

  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);

   pinMode(FlamePin, INPUT);
   pinMode(buzzer, OUTPUT);
  
}





void loop() {
 //pır sensor-lamp için
  sensorValue = digitalRead(sensor);
  Serial.println("Sensor Value="+String(sensorValue));
  //delay(100);

  if (sensorValue == 1) {
    digitalWrite(tetik, HIGH);

  } else {
    digitalWrite(tetik, LOW);
  }


//lm35-lcd (sıcaklıgı ekrana yazdırma)
okunan_deger= analogRead(lm35Pin);
sicaklik_gerilim=(okunan_deger /1023.0)*5000;
sicaklik=sicaklik_gerilim /10.0;


if(sicaklik>30){
 lcd.print("sicaklik yükseldi"); 
 lcd.setCursor(2,1);
 lcd.println(sicaklik);
 delay(100);
 lcd.clear();
  }
  else if(sicaklik<20){
 lcd.print("sicaklik düstü"); 
 lcd.setCursor(2,1);
 lcd.println(sicaklik);
 delay(100);
 lcd.clear();
  }
    
    
lcd.print("SICAKLIK");
lcd.setCursor(2,1);
lcd.println(sicaklik);
delay(100);
lcd.clear();




//keypadPhone-red and green led (sifreyi girme)
customKey=customKeypad.getKey();
if(customKey){
  Data[data_count]=customKey;
  data_count++;
}

if(data_count==Password_Legenth-1){
  if(!strcmp(Data,Master)){
    digitalWrite(green,HIGH);
    delay(10);
    }
  else{
    digitalWrite(red,HIGH);
    }

}



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

void clearData(){
  while(data_count!=0){
    Data[data_count--]=0;
    }
    return;
  }
   
