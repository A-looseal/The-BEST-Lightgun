/***********
╔═══╦═══╗╔═══╦════╦═══╗
║╔═╗║╔═╗║║╔═╗║╔╗╔╗║╔═╗║
║╚═╝║║─║║║╚═╝╠╝║║╚╣╚══╗╔══╦══╗
║╔══╣╚═╝║║╔╗╔╝─║║─╚══╗║║╔═╣╔╗║
║║─╔╣╔═╗╠╣║║╚╦╗║║╔╣╚═╝║║╚═╣╚╝║
╚╝─╚╩╝─╚╩╩╝╚═╩╝╚╝╚╩═══╝╚══╩══╝
Main File: PARTS_Lightgun.ino
version: 1.0.0

*/



#include "src/hardware_Controller.h"

void setup()
{
    Serial.begin(115200);
    setup_Buttons();
} // end of setup

void loop()
{
    buttonCheck();
    displayData();
    delay(1000);
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
    }