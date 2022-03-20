#include <Joystick.h>

byte // boolean to store state of each button before blasting to usb
    button_1_bool = false,
    button_2_bool = false,
    button_3_bool = false,
    button_4_bool = false,
    button_5_bool = false,
    button_6_bool = false,
    button_7_bool = false,
    button_8_bool = false,
    button_9_bool = false,
    button_10_bool = false,
    button_11_bool = false,
    button_12_bool = false,
    button_13_bool = false,
    virtual_X_button = false,
    virtual_Y_button = false;


//ps2 joystick
const byte
    Lx_Pin = A8,
    Ly_Pin = A9;
int Lx_Angle;
int Ly_Angle;

void setup_Joystick()
{
    // Initialize Joystick Library
    Joystick.begin(true);
    pinMode(Lx_Pin, INPUT_PULLUP);
    pinMode(Ly_Pin, INPUT_PULLUP);
}

