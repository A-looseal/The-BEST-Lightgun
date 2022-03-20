#include "hardware_Controller.h"

void checkHardwareForUpdates(){
buttonCheck();
joystickCheck();
}


void map_Joystick_Data(){
Lx_Angle = map(Lx_Angle,150,850, 250, 750);
Ly_Angle = map(Ly_Angle,150,850, 250, 750);
}
//send joystick data to HID
void send_Joystick_Data(int wait)
{
  //send data to joystick library
  Joystick.setXAxis(Rx_Angle); //assign the right stick PITCH to the X axis of the
  Joystick.setYAxis(Ry_Angle); //assign the right stick YAW to the Y axis of the
  Joystick.setZAxis(Rz_Angle); //assign the right stick YAW to the Y axis of the
  Joystick.setXAxisRotation(Lx_Angle); //assign the left stick PITCH to the X axis of the mpu
  Joystick.setYAxisRotation(Ly_Angle); //assign the left stick ROLL to the Y axis of the mpu
  Joystick.setButton(0, button_1_bool);
  Joystick.setButton(1, button_2_bool);
  Joystick.setButton(2, button_3_bool);
  Joystick.setButton(3, button_4_bool);
  Joystick.setButton(4, button_5_bool);
  Joystick.setButton(5, button_6_bool);
  Joystick.setButton(6, button_7_bool);
  Joystick.setButton(7, button_8_bool);
  Joystick.setButton(8, button_9_bool);
  Joystick.setButton(9, button_10_bool);
  Joystick.setButton(10, button_11_bool);
  Joystick.setButton(11, button_12_bool);
  Joystick.sendState();
  delay(wait); //delay between sending to usb
}

