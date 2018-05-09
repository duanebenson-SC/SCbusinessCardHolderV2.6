# SCbusinessCardHolderV2.6
Screaming Circuits business card holder, V2.6

The second publicly released version of our electronic business card holder. V2.6 has most ports brought out to headers, and a different battery. Note that the silk screen calles out a CR2032 cell, but it actually takes a pair of CR1220 coin cells.

The Screaming Circuits business card holder is a multi-function device intended for your amusement and as a demonstration of our workmanship.

The current version of the card holder, V2.6, uses a PIC18F46K22 microcontroller. The design will work fine with other members of the PIC18F??K22 family. However, it you change the variant, you will need to uncomment the corresponding #define in globals.h, under the personality settings section.

The .brd and .sch are CAD files for Autodesk Eagle version 8.5 or newer

Operation:
1. Turn on power and place cards between the header pins and user buttons. The dievice will sleep until a card is removed

2. The bottom edge of the board has a small ruler, marked in inches and fractions of an inch

3. With power on, hold the device so the ruler on on a flat surface. As you tilt it side to side, the LEDs will act as a bubble level

4. With power off, if you hold both buttons and then turn power on, all the LEDs will light up. Pressing User 2 will switch to normal mode
  4a. Press and hold User 1 and power on will light up all green LEDs
  4b. Press and hold User 2 and power on will light up all red LEDs

5. With power on, pressing the User buttons will run a quick flashing patterm - unique for each button
