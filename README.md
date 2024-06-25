# Blinking the on board LED

This was my first project with the esp32 devkitv1 mcu with nothing other than the board itself.
Its probably a great beginner project to familiarize yourself with the GPIO API.

## Table of contents
-Requirements

-Installation

-Execution

## Requirements

Esp-idf setup on your system

## Installation

Clone the repository in the esp-idf folder.
```bash
git -C ~/esp/esp-idf clone https://github.com/arjunnain17/BlinkEsp32
```

Build the project using
```bash
idf.py build
```

## Execution

Flash the program and open the serial monitor
```bash
idf.py flash && idf.py monitor
```
If everything is setup correctly the on-board blue LED will start blinking with a delay and will communicate the state of LED via tha monitor

