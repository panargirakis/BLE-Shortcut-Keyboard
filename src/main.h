#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include "BLEDevice.h"
#include "BLEHIDDevice.h"
#include "HIDTypes.h"
#include "HIDKeyboardTypes.h"

// Forward declarations
void bluetoothTask(void*);
void typeText(uint8_t text);
int parseAnalogIn(int rawInput);
uint8_t toFunctionKey(int number);

#endif // MAIN_H
