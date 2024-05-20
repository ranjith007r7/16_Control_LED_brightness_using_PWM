# Controlling LED Brightness Using PWM

## Overview

This project demonstrates how to control the brightness of an LED using Pulse Width Modulation (PWM) on an Arduino. The LED's brightness increases gradually from off to maximum and then decreases back to off. The current state of the LED brightness is also printed to the Serial Monitor.

## Components

- Arduino board (e.g., Uno, Mega)
- LED
- Resistor (220Ω recommended)
- Breadboard and jumper wires

## Circuit Diagram

1. **LED**
   - Connect the cathode (short leg) of the LED to the ground (GND) on the Arduino.
   - Connect the anode (long leg) of the LED to a current-limiting resistor.
   - Connect the other end of the resistor to the digital PWM pin 3 on the Arduino.

## Code Explanation

### Variables

- `ledPin`: The pin connected to the LED (set to PWM pin 3).

### Setup

In the `setup()` function:
- The `ledPin` is set as an OUTPUT.
- The LED is initialized to the OFF state with `analogWrite(ledPin, 0)`.
- Serial communication is initialized at 9600 baud.

### Loop

In the `loop()` function:
- The brightness of the LED is increased from off to maximum:
  - A `for` loop increments the PWM value from 0 to 254.
  - The `analogWrite(ledPin, i)` function sets the PWM value, gradually increasing the brightness.
  - A delay of 30 milliseconds creates a smooth transition.
- A message is printed to the Serial Monitor when maximum brightness is reached.
- The brightness of the LED is decreased from maximum to off:
  - A `for` loop decrements the PWM value from 254 to 0.
  - The `analogWrite(ledPin, i)` function sets the PWM value, gradually decreasing the brightness.
  - A delay of 30 milliseconds creates a smooth transition.
- A message is printed to the Serial Monitor when minimum brightness is reached.

## Usage Instructions

1. Assemble the circuit as per the circuit diagram.
2. Upload the provided code to the Arduino board.
3. Open the Serial Monitor from the Arduino IDE (Tools -> Serial Monitor) to view status messages.
4. Observe the LED gradually increasing and decreasing in brightness.

## Example Output

- The Serial Monitor will display:
  - "Brightness of the LED will increase from OFF condition to MAXIMUM"
  - "MAXIMUM Brightness reached"
  - "Brightness of the LED will decrease from MAXIMUM to OFF condition"
  - "MINIMUM Brightness reached"

This project provides a basic understanding of controlling LED brightness using PWM on an Arduino. Enjoy experimenting with different delay times and PWM values to see their effects on the LED brightness transition!

---

