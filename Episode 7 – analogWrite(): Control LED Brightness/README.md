# Episode 7 – analogWrite(): Control LED Brightness

## 1. Objective

In this episode, we will learn how to control LED brightness using the Arduino `analogWrite()` function.

By changing a numerical value in the program between 1 and 255, we can control the brightness of an LED using Pulse Width Modulation (PWM).

## 2. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| LED | 1 |
| 220Ω or 330Ω resistor | 1 |
| Breadboard | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## 3. Circuit Diagram

![Analog Write LED Brightness Circuit](Circuit.png)

## 4. Circuit Connections

| Arduino Pin | Connection |
|---|---|
| Digital Pin 9 (PWM) | LED anode through a 220Ω or 330Ω resistor |
| GND | LED cathode |

**Note:** Digital pin 9 is a PWM-enabled pin on Arduino UNO.

## 5. Arduino Program

```cpp
// Episode 7: analogWrite() - Control LED Brightness

int LEDPin = 9;
int bright = 180;

void setup() {
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  analogWrite(LEDPin, bright);
}
```

## 6. Understanding the Program

### 1. LEDPin

```cpp
int LEDPin = 9;
```

Defines digital pin 9 as the LED control pin.

### 2. Brightness Variable

```cpp
int bright = 180;
```

Stores the brightness value that will be written to the LED.

The value can be changed between 1 and 255.

### 3. pinMode()

```cpp
pinMode(LEDPin, OUTPUT);
```

Configures digital pin 9 as an output.

### 4. analogWrite()

```cpp
analogWrite(LEDPin, bright);
```

Generates a PWM signal on the selected pin to control LED brightness.

## 7. Understanding PWM Values

On the classic Arduino UNO, `analogWrite()` accepts values from 0 to 255.

| PWM Value | Approximate Duty Cycle | LED Output |
|---:|---:|---|
| 0 | 0% | OFF |
| 1 | 0.4% | Very dim |
| 64 | 25% | Low brightness |
| 128 | 50% | Medium brightness |
| 180 | 71% | Medium-high brightness |
| 255 | 100% | Full brightness |

**Important:** PWM is not a true analog voltage output. It rapidly switches the digital output between HIGH and LOW. Changing the duty cycle changes the perceived LED brightness.

## 8. Experiment and Explore

Try the following values by changing the `bright` variable:

1. Set `bright = 20` and observe the LED.
2. Set `bright = 80` and compare the brightness.
3. Set `bright = 150` and observe the change.
4. Set `bright = 255` and observe maximum brightness.
5. Set `bright = 0` to switch OFF the LED.

Observe how the brightness changes as the PWM value increases.

## 9. Learning Outcomes

After completing this experiment, students will understand:

- The purpose of `analogWrite()`.
- Pulse Width Modulation (PWM).
- PWM values from 0 to 255.
- How to control LED brightness through programming.
- The difference between digital output and PWM output.
- How to identify PWM-enabled pins on Arduino UNO.

---

**Arduino Learning Series | Aariv Technologies**

*Build your Tech Skills*
