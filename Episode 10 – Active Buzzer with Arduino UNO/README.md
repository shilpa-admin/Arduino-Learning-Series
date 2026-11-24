# Episode 10 – Active Buzzer with Arduino UNO

## 1. Objective

In this episode, we will learn how to interface an active buzzer with Arduino UNO through three practical activities:

1. Test an active buzzer using a DC supply.
2. Generate different beep patterns using an Arduino program.
3. Control the active buzzer using a push button.

This experiment introduces digital output, digital input and basic hardware interfacing.

## 2. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| Active Buzzer (5V rated) | 1 |
| Push Button | 1 |
| 10kΩ resistor | 1 |
| Breadboard | 1 |
| Jumper wires | As required |
| USB cable | 1 |

## 3. Understanding an Active Buzzer

An active buzzer is an electronic sound-producing component with an internal oscillator.

When the required DC voltage is applied, the internal oscillator generates a sound.

### Active Buzzer Terminals

- Positive (+): Usually the longer terminal.
- Negative (−): Usually the shorter terminal.

**Important:** Check the polarity and rated operating voltage printed on the buzzer or its datasheet before connecting it.

### Active vs Passive Buzzer

| Active Buzzer | Passive Buzzer |
|---|---|
| Contains an internal oscillator | Requires an external frequency signal |
| Produces sound when DC voltage is applied | Requires a changing signal to produce sound |
| Usually produces a fixed pitch | Can produce different pitches |
| Can be switched ON/OFF using digitalWrite() | Can be controlled using tone() |

## 4. Activity 1 – Test Active Buzzer Using DC Supply

### Circuit Diagram

![Active Buzzer DC Test](Circuit_1_DC_Test.png)

### Connections

| Arduino UNO | Active Buzzer |
|---|---|
| 5V | Positive (+) |
| GND | Negative (−) |

### Procedure

1. Connect the Arduino UNO to the computer using a USB cable.
2. Connect the positive terminal of the active buzzer to the 5V pin.
3. Connect the negative terminal to GND.
4. The buzzer should produce a continuous sound.
5. Disconnect the buzzer after testing.

### Observation

The active buzzer produces sound as soon as the required DC voltage is applied.

No Arduino program is required for this basic hardware test.

**Safety note:** Perform this test only with a buzzer rated for 5V. Avoid shorting the 5V and GND pins.

## 5. Activity 2 – Generate Different Beep Patterns Using Arduino

### Circuit Connections

| Arduino Pin | Active Buzzer |
|---|---|
| Digital Pin 8 | Positive (+) |
| GND | Negative (−) |

### Arduino Program

```cpp
// Episode 10: Active Buzzer - Different Beep Patterns

int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Short beep
  digitalWrite(buzzerPin, HIGH);
  delay(200);
  digitalWrite(buzzerPin, LOW);
  delay(300);

  // Long beep
  digitalWrite(buzzerPin, HIGH);
  delay(600);
  digitalWrite(buzzerPin, LOW);
  delay(500);

  // Two quick beeps
  for (int i = 0; i < 2; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(150);
    digitalWrite(buzzerPin, LOW);
    delay(150);
  }

  delay(1000);
}
```

### Understanding the Program

**1. Pin Declaration**

```cpp
int buzzerPin = 8;
```

Assigns digital pin 8 to the active buzzer.

**2. Pin Configuration**

```cpp
pinMode(buzzerPin, OUTPUT);
```

Configures the buzzer pin as an output.

**3. Switching ON the Buzzer**

```cpp
digitalWrite(buzzerPin, HIGH);
```

Supplies a HIGH output to the buzzer, switching it ON.

**4. Switching OFF the Buzzer**

```cpp
digitalWrite(buzzerPin, LOW);
```

Switches the buzzer OFF.

**5. Delay Function**

```cpp
delay(200);
```

Keeps the buzzer in its current state for the specified duration in milliseconds.

### Expected Output

The buzzer produces:
- One short beep.
- One long beep.
- Two quick beeps.
- A pause before repeating the sequence.

**Note:** An active buzzer generally produces a fixed pitch. Changing the ON/OFF durations changes the beep pattern and duration, not the actual pitch.

## 6. Activity 3 – Control Active Buzzer Using a Push Button

### Circuit Diagram

![Active Buzzer with Push Button](Circuit_2_Pushbutton_Control.png)

### Circuit Connections

#### Buzzer

| Arduino Pin | Connection |
|---|---|
| Digital Pin 8 | Buzzer positive (+) |
| GND | Buzzer negative (−) |

#### Push Button

| Connection | Description |
|---|---|
| 5V | One terminal of the push button |
| Digital Pin 12 | Other terminal of the push button |
| 10kΩ resistor | Between Digital Pin 12 and GND |

The 10kΩ resistor acts as a pull-down resistor. It ensures that the input remains LOW when the push button is not pressed.

### Arduino Program

```cpp
// Episode 10: Active Buzzer with Push Button

int buzzerPin = 8;
int buttonPin = 12;
int buttonState;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(buzzerPin, HIGH);
  }
  else {
    digitalWrite(buzzerPin, LOW);
  }
}
```

### Understanding the Program

- `buttonPin = 12` defines the push-button input pin.
- `buzzerPin = 8` defines the buzzer output pin.
- `digitalRead(buttonPin)` reads the push-button state.
- When the button is pressed, D12 reads HIGH.
- When the button is released, D12 reads LOW.
- `digitalWrite()` controls the buzzer based on the button state.

### Expected Output

| Push Button Condition | Buzzer Output |
|---|---|
| Pressed | ON |
| Released | OFF |

The buzzer remains ON as long as the button is pressed.

## 7. Experiment and Explore

1. Change the short beep duration from 200 ms to 100 ms.
2. Change the long beep duration to 1000 ms.
3. Create a sequence of three short beeps followed by one long beep.
4. Try controlling the buzzer using a different digital pin.
5. Modify the push-button program to keep the buzzer ON for a fixed duration after pressing the button.

## 8. Learning Outcomes

After completing this experiment, students will understand:

- The working principle of an active buzzer.
- The difference between active and passive buzzers.
- Interfacing a buzzer with Arduino UNO.
- Controlling an output using digitalWrite().
- Generating different beep patterns using delay().
- Reading push-button input using digitalRead().
- Using a pull-down resistor in a digital input circuit.

---

**Arduino Learning Series | Aariv Technologies**

*Build your Tech Skills*
