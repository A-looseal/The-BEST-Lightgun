#include "mux_Controller.h" //multiplexer controller
#include "mcu_Controller.h" // accelerometer/gyroscope controller
#include "joystick_Controller.h" //psp-2000 joystick controller


void setup_Hardware()
{
    // Initialize Joystick Library
    setup_Buttons();
    setup_Joystick(); 
}

/*MOTOR STUFF
*/
void pulseMotor(int i, int wait)
{
    mux.channel(i);
    pinMode(SIGNAL_PIN, OUTPUT); // set as output to write on mux channels
    analogWrite(SIGNAL_PIN, 255);
    delay(wait);
    analogWrite(SIGNAL_PIN, 0);
} // end

// checks the state of each button and updates boolean stores
void buttonCheck()
{
    readAllMux();
    digitizeAllMux();
    button_1.read(); // read the button
    if (button_1.wasReleased())
    {
        button_1_bool = true;
        Serial.println("button 1 was just pressed");
    }
    else
        button_1_bool = false;
    // button 2
    button_2.read(); // read the button
    if (button_2.wasReleased())
    {
        button_2_bool = true;
        Serial.println("button 2 was just pressed");
    }
    else
        button_2_bool = false;
    // button
    button_3.read(); // read the button
    if (button_3.wasReleased())
    {
        button_3_bool = true;
        Serial.println("button 3 was just pressed");
    }
    else
        button_3_bool = false;
    // button
    button_4.read(); // read the button
    if (button_4.wasReleased())
    {
        button_4_bool = true;
        Serial.println("button 4 was just pressed");
        pulseMotor(14,10);
    }
    else
        button_4_bool = false;
    // button
    button_5.read(); // read the button
    if (button_5.wasReleased())
    {
        button_5_bool = true;
        Serial.println("button 5 was just pressed");
    }
    else
        button_5_bool = false;
    // button
    button_6.read(); // read the button
    if (button_6.wasReleased())
    {
        button_6_bool = true;
        Serial.println("button 6 was just pressed");
        pulseMotor(14,20);
    }
    else
        button_6_bool = false;
    // button
    button_7.read(); // read the button
    if (button_7.wasReleased())
    {
        button_7_bool = true;
        Serial.println("button 7 was just pressed");
    }
    else
        button_7_bool = false;
    // button
    button_8.read(); // read the button
    if (button_8.wasReleased())
    {
        button_8_bool = true;
        Serial.println("button 8 was just pressed");
    }
    else
        button_8_bool = false;
    // button
    button_9.read(); // read the button
    if (button_9.wasReleased())
    {
        button_9_bool = true;
        Serial.println("button 9 was just pressed");
    }
    else
        button_9_bool = false;
    // button
    button_10.read(); // read the button
    if (button_10.wasReleased())
    {
        button_10_bool = true;
        Serial.println("button 10 was just pressed");
    }
    else
        button_10_bool = false;
    // button
    button_11.read(); // read the button
    if (button_11.wasReleased())
    {
        button_11_bool = true;
        Serial.println("button 11 was just pressed");
    }
    else
        button_11_bool = false;
    // button
    button_12.read(); // read the button
    if (button_12.wasReleased())
    {
        button_12_bool = true;
        Serial.println("button 12 was just pressed");
    }
    else
        button_12_bool = false;
    // button
    button_13.read(); // read the button
    if (button_13.wasReleased())
    {
        button_13_bool = true;
        Serial.println("button 13 was just pressed");
    }
    else
        button_13_bool = false;
}

void joystickCheck(){
    Lx_Angle = analogRead(Lx_Pin);
    Ly_Angle = analogRead(Ly_Pin);
    
}
