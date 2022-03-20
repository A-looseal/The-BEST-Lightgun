
#include <light_CD74HC4067.h>
#include <JC_Button.h> // https://github.com/JChristensen/JC_Button

#define SIGNAL_PIN A7 // Pin Connected to Sig pin of CD74HC4067
#define MUX_THRESHOLD 16
CD74HC4067 mux(6, 2, 3, 1); // s0 s1 s2 s3: select pins. create a new CD74HC4067 object with its four select lines

// holds incoming values from 74HC4067
byte muxValues_Analog[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

// holds incoming values from 74HC4067
byte muxValues_Digital[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

void readAllMux()
{
    for (int i = 0; i < 16; i++)
    {
        pinMode(SIGNAL_PIN, INPUT);                   // set as input to read on mux channels
        mux.channel(i);                               // choose an input pin on the 74HC4067
        muxValues_Analog[i] = analogRead(SIGNAL_PIN); // read the vlaue on that pin and store in array
    }
}

void digitizeAllMux()
{
    readAllMux();
    for (int i = 0; i < 16; i++)
    {
        int val = muxValues_Analog[i];
        if (val > MUX_THRESHOLD) // if value is higher than threshold
        {
            muxValues_Digital[i] = 1;
        }
        else
        {
            muxValues_Digital[i] = 0;
        }
    }
} // end





/*BUTTON STUFF
 */
Button button_1(muxValues_Digital[0]);   // define the button
Button button_2(muxValues_Digital[1]);   // define the button
Button button_3(muxValues_Digital[2]);   // define the button
Button button_4(muxValues_Digital[3]);   // define the button
Button button_5(muxValues_Digital[4]);   // define the button
Button button_6(muxValues_Digital[5]);   // define the button
Button button_7(muxValues_Digital[6]);   // define the button
Button button_8(muxValues_Digital[7]);   // define the button
Button button_9(muxValues_Digital[8]);   // define the button
Button button_10(muxValues_Digital[9]);  // define the button
Button button_11(muxValues_Digital[10]); // define the button
Button button_12(muxValues_Digital[11]); // define the button
Button button_13(muxValues_Digital[12]); // define the button
Button button_14(muxValues_Digital[13]); // define the button

void setup_Buttons()
{
    button_1.begin();  // initialize the button object
    button_2.begin();  // initialize the button object
    button_3.begin();  // initialize the button object
    button_4.begin();  // initialize the button object
    button_5.begin();  // initialize the button object
    button_6.begin();  // initialize the button object
    button_7.begin();  // initialize the button object
    button_8.begin();  // initialize the button object
    button_9.begin();  // initialize the button object
    button_10.begin(); // initialize the button object
    button_11.begin(); // initialize the button object
    button_12.begin(); // initialize the button object
    button_13.begin(); // initialize the button object
    button_14.begin(); // initialize the button object
}



