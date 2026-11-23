# Arduino UNO – Board Reference

This section provides the Arduino UNO board overview,
pin configuration, power pins and communication interfaces.

These resources are used as references throughout
the Arduino Learning Series.


# Arduino UNO – Board Overview

## Introduction

The Arduino UNO is a popular microcontroller development board used for learning electronics, embedded systems and programming.

It is based on the ATmega328P 8-bit microcontroller and provides digital input/output pins, analog input pins, power connections and communication interfaces.

## Arduino UNO Board Diagram

![Arduino UNO Board](Arduino_UNO_Board.png)

## Main Board Components

1. **USB Port:** Used to connect Arduino to a computer for programming and power.
2. **ATmega328P Microcontroller:** The main processing unit that executes the uploaded program.
3. **Digital Pins (D0–D13):** Used for digital input and output operations.
4. **Analog Pins (A0–A5):** Used to read analog signals from sensors.
5. **PWM Pins:** D3, D5, D6, D9, D10 and D11 support PWM output.
6. **Power Pins:** Provide 5V, 3.3V, GND and VIN connections.
7. **Reset Button:** Restarts the microcontroller.
8. **DC Power Jack:** Allows the board to be powered using an external DC supply.
9. **TX/RX Pins:** Used for serial communication.

## Pin Configuration

| Pin Group | Function |
|---|---|
| Digital I/O | D0–D13 |
| Analog Input | A0–A5 |
| PWM Output | D3, D5, D6, D9, D10, D11 |
| UART | D0 (RX), D1 (TX) |
| I2C | A4 (SDA), A5 (SCL) |
| SPI | D10, D11, D12, D13 |

## Technical Specifications

| Parameter | Specification |
|---|---|
| Microcontroller | ATmega328P |
| Architecture | 8-bit AVR |
| Operating Voltage | 5V |
| Clock Speed | 16 MHz |
| Digital I/O Pins | 14 |
| Analog Input Pins | 6 |
| PWM Resolution | 8-bit |
| ADC Resolution | 10-bit |

## Learning Resources

Refer to the Arduino Learning Series for practical demonstrations of board connections, programming and hardware interfacing.

**By Aariv Technologies**

*Build Your Tech Skills*
