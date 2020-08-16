# Project: Raspberry Pi and GPIOs
## Raspberry Pi
- It is a microcomputer designed to boost computer science education.
- It is cheap but powerful.
- Uses an ARM processor and Raspbian, a Debian distribution, as the default OS.

## GPIO
- GPIO stands for General Purpose Input Output.
![GPIO](GPIO-Pinout-Diagram-2.png)

### GPIO commands
#### Terminal
- `gpio readall`
- `gpio mode 1 OUT`
- `gpio write 1 ON`
- `gpio toggle 1`

#### WiringPi in C
- `wiringPiSetup();`
- `pinMode(29, OUTPUT);`
- `digitalWrite(29, 1);`

## Project Result
![GPIO readall](gpio-readall.jpg)
![Blinking LED](result-blinking-led.gif)