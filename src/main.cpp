#include <Arduino.h>
#include "RotaryEncoder.h"

#define PIN_A 2
#define PIN_B 3

RotaryEncoder encoder = RotaryEncoder(PIN_A, PIN_B);


void setup()
{
    // put your setup code here, to run once:

    encoder.isRotateValue = true;
    encoder.setMaxValue(255);
    encoder.setMinValue(0);
    encoder.skipValue = 3;

    Serial.begin(9600);
}

void loop()
{
    int val = encoder.getRotationValue();
    Serial.print(String(val) + "    \r");

    delay(100);
}