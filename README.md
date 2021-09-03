# ArduinoRubberDucky
## Rubber Ducky Implementation for Arduino IDE

This is an objectorientated version of a USB Rubber Ducky for Arduino.

It works with Arduino boards using the ATmega32U4 microcontroller: Leonardo and Arduino Micro

### Following scripts are available:
1. Write Text
2. Open Program
3. Shutdown PC (instant or with delay)
4. Open a FTP connection and download a file
5. Mouse simultation used as MouseJiggler

Simply download the ArduinoRubberDucky folder as a .zip file and open the included .ino file with the Arduino IDE.

Much fun!! :)

### Important note
Make sure you have a hardware button to activate/deactive the execution of the scripts. 
F.E. If "Shutdown PC instant" script gets executed, you cannot reprogram the Arduino anymore as the PC shuts down immediately.

**Use the scripts only within and IF-condition!!**

Possible solution for Hardware switch (LEDs only used for Status):

Software: Execute script only when Pin 0 is HIGH.
![image](https://user-images.githubusercontent.com/72397235/131964965-e7bc5dd0-e272-416f-afb2-b093348d4463.png)



A possible solutions to select the scripts via a DIP switch is shown below:
![image](https://user-images.githubusercontent.com/72397235/131964210-806f3cd4-90c8-4bb8-ba1e-aa52ac15ba08.png)



