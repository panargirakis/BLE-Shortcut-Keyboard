# ESP32 as Bluetooth Keyboard

With its built-in Bluetooth capabilities, the ESP32 can act as a Bluetooth keyboard. The below code is a minimal example of how to achieve it. It will generate the key strokes for a message whenever a button attached to the ESP32 is pressed.

For the example setup, a momentary button should be connected to pin 2 and to ground. Pin 2 will be configured as an input with pull-up.

In order to receive the message, add the ESP32 as a Bluetooth keyboard of your computer or mobile phone:

1. Go to your computers/phones settings
2. Ensure Bluetooth is turned on
3. Scan for Bluetooth devices
4. Connect to the device called "ESP32 Keyboard"
5. Open an empty document in a text editor
6. Press the button attached to the ESP32

The code has been written for the Arduino framework. I recommend using [PlatformIO](https://platformio.org/) for development as it is far superior to the Arduino IDE while still taking full advantage of the Arduino ecosystem (libraries, support etc.)
