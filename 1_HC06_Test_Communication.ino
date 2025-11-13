/*Test communication only 
This code doesn't activate the bluetooth yet, but it will allow us to test the serial communication

HC-06 TX Port should be connected to the digital pin Tx=2 of Arduino
HC-06 RX Port should be connected to the digital pin Rx=3 of Arduino (through a voltage divider, check image)

Add the library: SoftwareSerial.h

Open Serial Monitor: 
- 115200 baud
- No ending line

Once you upload the file to the Arduino Board, 
type in the Arduino serial monitor “AT”, and press Enter. 
The reply from HC-06 should be “OK”. This means that everything is properly set-up. Now you can test the next sketch. 

TROUBLESHOOTING:
- This code and settings are for Arduino UNO. Other boards may need different settings
- Check this tutorial: https://aleksandarhaber.com/connect-bluetooth-module-hc-06-with-arduino-and-use-mobile-phone-to-control-arduino/#google_vignette

*/

#include <SoftwareSerial.h>

unsigned int Tx=2;
unsigned int Rx=3;

SoftwareSerial BTserial(Tx, Rx); 

  
void setup() {
    Serial.begin(115200);
    BTserial.begin(9600);  
    }
 
void loop(){
    // Read the response from the HC-06 and send it to the Arduino Serial Monitor
    if (BTserial.available()){  
        Serial.write(BTserial.read());
        }
  
    // Read the input message from the Arduino Serial Monitor and send it to HC-06
    if (Serial.available()){
        BTserial.write(Serial.read());
        }
 
}
