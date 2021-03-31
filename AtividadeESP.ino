//Aluno: Eron Almeida Vieira da Silva
//Mat.:20142610326
//===========================================================//
//=========================Display7seg=======================//
//We always have to include the library
#include "LedControl.h"
#include <pgmspace.h>

LedControl lc=LedControl(0,1,2,1);

 const char number[] = {0,1,2,3,4,5,6,7,8,9};

// we always wait a bit between updates of the display //
unsigned long delaytime=250;
void setup() {
  
   //The MAX72XX is in power-saving mode on startup,
  // we have to do a wakeup call
   
  lc.shutdown(0,false);
  // Set the brightness to a medium values 
  lc.setIntensity(0,8);
  // and clear the display 
  lc.clearDisplay(0);
}
void loop(){

  for(int a = 0;a<10;a++){
     lc.setDigit(0,0,number[a],false);
     delay(200); 
  }
}
// =======================================================//
/*=========================Pisca Led======================//
void setup() {
  // initialize digital esp8266 gpio 2 as an output.
  pinMode(2, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(LED_BUILTIN, LOW);// turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(2, LOW);
  digitalWrite(LED_BUILTIN, HIGH);// turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
//========================================================*/
//===================LED_PUSHBUTTON=======================//
/*


const int button1 = 0;
const int button2 = 1;
const int led1 = 2;
boolean x = 0;

void setup(){
pinMode(button1,INPUT);
pinMode(button2,INPUT);
pinMode(led1,OUTPUT);
digitalWrite(led1,0);

}
void loop(){

  if( digitalRead(button1) == 1)          //Verificação de botões
    x = 1;
      if( x == 1)
      if(digitalRead(button2) == 1)
      x = 0;
      
      
      if( x == true)                      //Verificação de estado
      digitalWrite(led1,1);
      if(x==false)
      digitalWrite(led1,0);
}

*/
