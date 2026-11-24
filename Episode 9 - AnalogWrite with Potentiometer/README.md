# Episode 9 – Analog Write with Potentiometer

## 1. Objective

In this episode, we will learn how to control the brightness of an LED using a potentiometer and Arduino UNO.

By rotating the potentiometer knob, we can vary the input voltage supplied to the Arduino analog pin. Arduino reads this voltage and adjusts the LED brightness using PWM (Pulse Width Modulation).

## 2. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| Breadboard | 1 |
| LED | 1 |
| Potentiometer (10kΩ recommended) | 1 |
| 220Ω or 330Ω resistor | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## 3. Circuit Diagram

![Analog Write with Potentiometer Circuit](Circuit.png)

## 4. Circuit Connections

### Potentiometer Connections

| Potentiometer Terminal | Arduino Connection |
|---|---|
| First outer terminal | 5V |
| Middle terminal (wiper) | A0 |
| Other outer terminal | GND |

### LED Connections

| Arduino Pin | Connection |
|---|---|
| Digital Pin 9 (PWM) | LED anode through a 220Ω or 330Ω resistor |
| GND | LED cathode |

**Note:** The middle terminal of the potentiometer provides a variable voltage to analog pin A0.

## 5. Arduino Program

```cpp
// Control LED brightness using a Potentiometer

int LEDPin = 9;
int potPin = A0;

int potValue = 0;
int bright = 0;

void setup() {
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);

  bright = map(potValue, 0, 1023, 0, 255);

  analogWrite(LEDPin, bright);
}
```

## 6. Understanding the Program

### 1. analogRead()

```cpp
potValue = analogRead(potPin);
```

Reads the analog voltage at pin A0.

On a classic Arduino UNO, the 10-bit ADC converts the input voltage into a value between 0 and 1023.

### 2. map()

```cpp
bright = map(potValue, 0, 1023, 0, 255);
```

Converts the potentiometer reading into a value suitable for PWM output.

- Input range: 0–1023
- Output range: 0–255

### 3. analogWrite()

```cpp
analogWrite(LEDPin, bright);
```

Controls LED brightness using PWM (Pulse Width Modulation).

On the classic Arduino UNO, `analogWrite()` uses an 8-bit PWM value from 0 to 255.

- 0: LED OFF
- 128: Approximately 50% PWM duty cycle
- 255: LED at full brightness

**Important:** PWM is not a true analog voltage output. The pin switches between HIGH and LOW at a controlled duty cycle, which changes the LED's perceived brightness.

## 7. Working Principle

1. The potentiometer provides a variable voltage to analog pin A0.
2. Arduino reads the voltage using `analogRead()`.
3. The ADC converts the voltage into a digital value between 0 and 1023.
4. The `map()` function converts this reading into a PWM value between 0 and 255.
5. `analogWrite()` generates a PWM signal on pin 9.
6. The LED brightness changes as the potentiometer is rotated.

## 8. Expected Output

| Potentiometer Position | Approximate PWM Value | LED Output |
|---|---:|---|
| Minimum | 0 | OFF |
| 25% | 64 | Low brightness |
| 50% | 128 | Medium brightness |
| 75% | 191 | High brightness |
| Maximum | 255 | Full brightness |

## 9. Experiment and Explore

1. Change the LED connection from pin 9 to pin 6 and update the program.
2. Try different potentiometer values.
3. Observe how the LED brightness changes gradually.
4. Try controlling two LEDs using the same potentiometer.

## 10. Learning Outcomes

After completing this experiment, students will understand:

- Analog input using a potentiometer.
- The working principle of an ADC.
- The difference between analogRead() and analogWrite().
- PWM (Pulse Width Modulation).
- The map() function.
- LED brightness control using Arduino UNO.

---

**Arduino Learning Series | Aariv Technologies**

*Build your Tech Skills*
