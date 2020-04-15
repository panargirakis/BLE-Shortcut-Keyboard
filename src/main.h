#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include "BLEDevice.h"
#include "BLEHIDDevice.h"
#include "HIDTypes.h"
#include "HIDKeyboardTypes.h"
#include "BLEKeyCodes.h"

// Forward declarations
void bluetoothTask(void*);
void typeText(const char* text);
int parseAnalogIn(int rawInput);

#endif // MAIN_H
