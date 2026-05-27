![Schematic](schematics/kicad_schematic.png)

## Smart Door Opener with Passcode

A security system that opens a door using a secret code entered on a keypad. Built with Arduino UNO, 4x4 membrane keypad, and SG90 servo motor.

### Components

| Device | Usage | Price |
|--------|--------|-------|
| Arduino UNO | Microcontroller | [40 RON](https://www.optimusdigital.ro/ro/placi-arduino/1837-arduino-uno-r3-ch340.html?search_query=arduino+uno&results=121) |
| Servo motor SG90 | Door lock mechanism | [9.49 RON](https://www.optimusdigital.ro/ro/servomotoare/978-micro-servo-motor-sg90-9g.html?search_query=sg90&results=33) |
| 4x4 Matrix Membrane Keypad | Passcode input | [9 RON](https://www.optimusdigital.ro/ro/tastaturi/1238-tastatura-matriciala-4x4.html?search_query=keypad+4x4&results=32) |
| Jumper Wires | Connecting components | [20 RON](https://www.optimusdigital.ro/ro/fire-fire-mufate/884-set-fire-tata-tata-40p-10-cm.html?search_query=fire&results=110) |
| Breadboard (optional) | Project board | [10 RON](https://www.optimusdigital.ro/ro/prototipare-breadboard-uri/8-breadboard-830-points.html) |

### Libraries

| Library | Description | Usage |
|---------|-------------|-------|
| [Keypad](https://www.arduino.cc/reference/en/libraries/keypad/) | Official Arduino library for matrix keypads | Used for reading the 4x4 membrane keypad and detecting which key is pressed |
| [Servo](https://www.arduino.cc/reference/en/libraries/servo/) | Built-in Arduino library for servo motors | Used for controlling the SG90 servo motor to open/close the door lock mechanism |

## How It Works

1. The user enters a 4-digit code on the keypad.
2. The Arduino compares the entered code with the predefined password.
3. If the code is correct:
   - The servo motor rotates 90 degrees (unlocks the door).
   - After 3 seconds, the servo returns to 0 degrees (locks the door).
4. If the code is incorrect:
   - The door remains locked.
   - The system resets and waits for a new attempt.

## Wiring Instructions

| Keypad Pin | Arduino Pin |
|------------|-------------|
| Row 1 (R1) | Digital Pin 9 |
| Row 2 (R2) | Digital Pin 8 |
| Row 3 (R3) | Digital Pin 7 |
| Row 4 (R4) | Digital Pin 6 |
| Column 1 (C1) | Digital Pin 5 |
| Column 2 (C2) | Digital Pin 4 |
| Column 3 (C3) | Digital Pin 3 |
| Column 4 (C4) | Digital Pin 2 |

| Servo Motor | Arduino Pin |
|-------------|-------------|
| Red (VCC) | 5V |
| Brown/Black (GND) | GND |
| Orange/Yellow (Signal) | Digital Pin 10 |
