# HC-06 Bluetooth Module Tutorial
------- 
This tutorial covers how to use the HC-06 module to establish communication between an Arduino UNO board and an Android device via Bluetooth. 

*Note: The HC-06 is a Bluetooth classic module, not BLE (Bluetooth Low Energy)
Some devices, such as iPhones, only operate via BLE*

-------------- 
# Tutorial
-------------- 
**HARWARE**

- HC06 Bluetooth Module

- Arduino Uno

- Resistor 2.2k Ohms

- Resistor 1k ohms

-------------- 
**WIRING**

Wiring reference image [here](https://github.com/kingston-hackSpace/HC06_Bluetooth_Module/blob/main/HC06_Diagram.png)

-------------- 
**CODE**
-------------- 

**SKETCH 1: HC06 - Testing communication**

This sketch doesn't activate the bluetooth yet, but it will allow us to test communication with the HC06

**Libraries required:** SoftwareSerial.h

**Instructions:**
	
- Upload [this code](https://github.com/kingston-hackSpace/HC06_Bluetooth_Module/blob/main/1_HC06_Test_Communication.ino) to your Arduino UNO.
	
- Open the Serial Monitor and select 115200 baud, No ending line.

- Identify the Serial Monitor's Message Box. Type “AT” and press Enter.
	
- You should see a reply from the HC-06 saying “OK”. This means that everything has been properly set-up. 

**TROUBLESHOOTING:**
- This code and settings are for Arduino UNO. Other boards may need different settings
  
- Check [this tutorial](https://aleksandarhaber.com/connect-bluetooth-module-hc-06-with-arduino-and-use-mobile-phone-to-control-arduino/#google_vignette)


-------------- 
**SKETCH 2: HC06 - Sending a Message**

This sketch sets up the Arduino UNO board to send messages via Bluetooth.
You can use an smartphone App such as "Serial Bluetooth Terminal" (Android only) to receive the messages.

**Key features:**
1. Arduino reads characters (char) from the HC-06 until it sees the end-of-message character '#'.
   
3. Once the full message is received, it prints the message to the Serial Monitor.
   
5. Arduino sends a confirmation back to the smartphone, e.g., "Arduino sends back <message>".

**Instructions:**

- Upload [this code](https://github.com/kingston-hackSpace/HC06_Bluetooth_Module/blob/main/2_HC06_Send_MSG.ino) to your Arduino UNO board.

- Enable Bluetooth in your android device and select the HC-06 module

- Download and Open the App "Serial Bluetooth Terminal". Go to the Options Panel (3 lines at the top left corner), select "Devices", select your HC-06 module. You should see the messages:  
	- Connecting to HC-06...
	- Connected

- The red LED in your Bluetooth module should blink until it successfully connects to your phone. Once successful, the LED will turn on and stop blinking. 

- Go to your App. You should see a counting messages on the App screen. 


