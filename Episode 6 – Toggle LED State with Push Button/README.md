# Episode 6 – Toggle LED State with Push Button

## 1. Objective

In this episode, we will learn how to toggle an LED using a push button with Arduino UNO.

Unlike the previous experiment, where the LED remains ON only while the button is pressed, this experiment changes the LED state with every button press.

- First press: LED ON
- Second press: LED OFF
- Third press: LED ON
- Fourth press: LED OFF

This experiment introduces digital input, state management and edge detection.

## 2. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| Breadboard | 1 |
| LED | 1 |
| Push Button | 1 |
| 220Ω or 330Ω resistor | 1 |
| 10kΩ resistor | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## 3. Circuit Diagram

![Toggle LED with Push Button Circuit](Circuit.png)

## 4. Circuit Connections

Refer to the attached circuit diagram for the connections.

The program uses:
- Digital Pin 8 to control the LED.
- Digital Pin 12 to read the push button.

**Note:** The code expects a pull-down resistor configuration. The input reads LOW when the button is released and HIGH when pressed.

## 5. Arduino Program

```cpp
// Toggle LED state using a Push Button

int LEDPin = 8;
int buttonPin = 12;
int LEDState = 0;
int buttonState;
int buttonStateOld = LOW;

void setup() {
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Detect a new button press
  if (buttonState == HIGH && buttonStateOld == LOW) {
    LEDState = !LEDState;

    digitalWrite(LEDPin, LEDState);

    delay(50);
  }

  buttonStateOld = buttonState;
}
```

## 6. Understanding the Program

**1. LEDState**

Stores the current LED condition:
- `0` means OFF.
- `1` means ON.

**2. buttonState**

Reads the current digital input from the push button.

**3. buttonStateOld**

Stores the previous button reading. It helps identify a new button press.

**4. Edge Detection**

The condition:

`buttonState == HIGH && buttonStateOld == LOW`

detects the transition from LOW to HIGH.

**5. Toggle Operation**

`LEDState = !LEDState;`

The NOT operator reverses the current state:
- 0 becomes 1.
- 1 becomes 0.

**6. Debouncing**

`delay(50)` provides a short delay to reduce unwanted repeated triggering due to mechanical button contact bounce.

## 7. Working Principle

1. Arduino continuously reads the push button.
2. When the button changes from LOW to HIGH, Arduino detects a new press.
3. The LED state is reversed.
4. The updated state is sent to the LED using `digitalWrite()`.
5. The previous button state is updated for the next reading.

## 8. Expected Output

| Button Action | LED Output |
|---|---|
| First press | ON |
| Second press | OFF |
| Third press | ON |
| Fourth press | OFF |

The LED retains its previous state after the button is released.

## 9. Experiment and Explore

1. Change the LED connection from pin 8 to pin 9 and update the code.
2. Try toggling two LEDs using the same push button.
3. Replace the LED with a buzzer.
4. Experiment with different debounce delays.

## 10. Learning Outcomes

After completing this experiment, students will understand:

- Digital input and output.
- Reading push button states.
- State variables in embedded programming.
- Boolean NOT operator.
- Edge detection.
- Basic switch debouncing.

---

**Arduino Learning Series | Aariv Technologies**

*Build your Tech Skills*
