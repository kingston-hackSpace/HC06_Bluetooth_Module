/*
Arduino UNO - Smartphone Communication VIA HC06 Bluetooth Module



*/
#include <SoftwareSerial.h>

unsigned int Tx=2;
unsigned int Rx=3;
SoftwareSerial BTserial(Tx, Rx); 

//Global variables
String totalMessage="";
String printMessage="";
String sentBackMessage="";
char receivedCharacter;
char endMessageCharacter='#';

int counter = 0;  // just a test variable
  
void setup() {
   Serial.begin(115200);
   BTserial.begin(9600);
   BTserial.println("Bluetooth Communication has been successful");  
   }
  


void loop(){

  //read messages (ending in #) from phone App 
  while (BTserial.available()){        
          receivedCharacter=(char)BTserial.read();
          totalMessage=totalMessage+receivedCharacter;
            
            if (receivedCharacter==endMessageCharacter){
            printMessage=totalMessage;
            totalMessage="";
            Serial.print(printMessage);
            sentBackMessage="Arduino sends back "+ printMessage;
            BTserial.print(sentBackMessage);
            }
          }


  //send counter messages
  counter++;
  BTserial.print("Counter: ");
  BTserial.println(counter);
  delay(1000); 

  }
