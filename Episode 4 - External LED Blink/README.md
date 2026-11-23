# Episode 4 – External LED Blink

**Arduino Learning Series | Aariv Technologies**

## 1. Introduction

In this experiment, we will interface an external LED with the Arduino UNO and control it using a digital output pin.

Unlike the previous experiment, where we used the built-in LED available on the Arduino board, this experiment uses an external LED connected through a breadboard.

This experiment introduces the fundamentals of digital output and basic electronic circuit connections.

## 2. Objective

- Understand how to interface an external LED with Arduino UNO.
- Learn the purpose of a current-limiting resistor.
- Configure a digital pin as OUTPUT.
- Control an LED using `digitalWrite()`.

## 3. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| Red LED | 1 |
| 330 Ω resistor | 1 |
| Breadboard | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## 4. Circuit Diagram

![External LED Blink Circuit](Circuit.png)

## 5. Circuit Connections

| LED / Component | Arduino Connection |
|---|---|
| Digital pin 8 | 330 Ω resistor |
| Other end of resistor | LED anode (long leg, +) |
| LED cathode (short leg, −) | GND |

**Important:** The 330 Ω resistor must be connected in series with the LED to limit current and protect the LED and Arduino output pin.

## 6. Arduino Program

File: `External_LED_Blink.ino`

```cpp
#define LED_PIN 8

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
```

## 7. Program Explanation

### `#define LED_PIN 8`

Defines digital pin 8 as the pin connected to the external LED.

### `pinMode(LED_PIN, OUTPUT)`

Configures digital pin 8 as an output pin.

### `digitalWrite(LED_PIN, HIGH)`

Sets the output pin HIGH (approximately 5V on a classic Arduino UNO), turning ON the LED.

### `delay(1000)`

Pauses program execution for 1000 milliseconds (1 second).

### `digitalWrite(LED_PIN, LOW)`

Sets the output pin LOW (approximately 0V), turning OFF the LED.

### `delay(1000)`

Keeps the LED OFF for one second before repeating the cycle.

## 8. Working Principle

The Arduino continuously generates HIGH and LOW signals on digital pin 8.

- When the output is HIGH, current flows through the resistor and LED to GND. The LED glows.
- When the output is LOW, the voltage across the LED circuit is approximately zero, so the LED turns OFF.

This sequence repeats continuously inside the `loop()` function.

## 9. Expected Output

The external LED:

- Turns ON for 1 second.
- Turns OFF for 1 second.
- Repeats continuously.

## 10. Experiment and Observation

Try changing the delay values and observe the blinking speed.

| ON Time | OFF Time | Observation |
|---|---|---|
| 1000 ms | 1000 ms | Normal blinking |
| 500 ms | 500 ms | Faster blinking |
| 2000 ms | 2000 ms | Slower blinking |
| 100 ms | 100 ms | Very fast blinking |

## 11. Learning Outcomes

After completing this experiment, learners will be able to:

- Interface an external LED with Arduino UNO.
- Understand LED polarity (anode and cathode).
- Explain the purpose of a current-limiting resistor.
- Configure and control digital output pins.
- Modify delay values to control blinking speed.

---

**Aariv Technologies**

*Build Your Tech Skills*
