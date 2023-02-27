

#include<Wire.h>
#include<LiquidCrystal.h>
#include<Keypad.h>
LiquidCrystal lcd(12,11,5,4,3,2);

#define FlamePin A1


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
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  
}
void loop() {

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


}

void clearData(){
  while(data_count!=0){
    Data[data_count--]=0;
    }
    return;
  }
   
