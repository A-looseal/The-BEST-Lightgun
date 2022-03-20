/******************************************
 ╔╗╔╗      ╔═══╦═══╗╔═══╦════╦═══╗
╔╝╚╣║      ║╔═╗║╔═╗║║╔═╗║╔╗╔╗║╔═╗║
╚╗╔╣╚═╦══╗ ║╚═╝║║─║║║╚═╝╠╝║║╚╣╚══╗ ╔══╦══╗
 ║║║╔╗║║═╣ ║╔══╣╚═╝║║╔╗╔╝─║║─╚══╗║ ║╔═╣╔╗║
 ║╚╣║║║║═╣ ║║─╔╣╔═╗╠╣║║╚╦╗║║╔╣╚═╝║ ║╚═╣╚╝║
 ╚═╩╝╚╩══╝ ╚╝─╚╩╝─╚╩╩╝╚═╩╝╚╝╚╩═══╝ ╚══╩══╝
*******************************************
The-BEST-Lightgun
Modern take on the classic Lightgun!
Designed & Manufactured by The BEST Parts Co ;)
*******************************************
Main File: com.Best-Lightgun.PartsCo.ino
version: 1.0.0


*/
#include "src/software_Controller.h"

void setup()
{
    Serial.begin(115200);
    setup_Hardware();
} // end of setup

void loop()
{
    checkHardwareForUpdates();
    send_Joystick_Data(5);
    displayData();
} // end of loop

void displayData() // dumps captured data from array to serial monitor
{
    Serial.println();
    Serial.println("Values from multiplexer:");
    Serial.println("========================");
    for (int i = 0; i < 14; i++)
    {
        Serial.print("button ");
        Serial.print(i);
        Serial.print(" = ");
        Serial.println(muxValues_Digital[i]);
    }
    Serial.println("========================");
    Serial.println("joystick data:");
    Serial.print("Lx: ");
    Serial.print(Lx_Angle);
    Serial.print("\t");
    Serial.print("Ly: ");
    Serial.print(Ly_Angle);
    Serial.println("\t");
}