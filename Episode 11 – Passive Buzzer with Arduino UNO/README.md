# Episode 11 – Passive Buzzer with Arduino UNO

## 1. Objective

In this episode, we will learn how to interface a passive buzzer with Arduino UNO and generate different sounds using the `tone()` and `noTone()` functions.

This episode consists of three activities:

1. Generate a tone using `tone()` and stop it using `noTone()`.
2. Generate three different tones using different frequencies.
3. Play the melody of *Twinkle, Twinkle, Little Star* using musical note frequencies.

## 2. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| Passive Buzzer | 1 |
| Breadboard | 1 |
| Jumper wires | 2 |
| USB cable | 1 |

## 3. Understanding a Passive Buzzer

A passive buzzer is an electronic sound-producing component that requires an external electrical signal to generate sound.

Unlike an active buzzer, a passive buzzer does not contain an internal oscillator to generate a fixed tone.

Arduino can generate different frequencies and control the pitch using the `tone()` function.

### Active Buzzer vs Passive Buzzer

| Active Buzzer | Passive Buzzer |
|---|---|
| Contains an internal oscillator | Requires an external signal |
| Produces sound when DC voltage is applied | Requires a changing signal |
| Generally produces a fixed pitch | Can produce different pitches |
| Can be switched ON/OFF using `digitalWrite()` | Can be controlled using `tone()` and `noTone()` |

## 4. Circuit Diagram

![Passive Buzzer Circuit](Circuit.png)

### Circuit Connections

| Passive Buzzer Terminal | Arduino UNO |
|---|---|
| Positive (+) | Digital Pin 8 |
| Negative (−) | GND |

### Hardware Setup

1. Place the passive buzzer on the breadboard.
2. Connect its positive terminal to Arduino Digital Pin 8.
3. Connect its negative terminal to Arduino GND.
4. Connect Arduino UNO to the computer using a USB cable.

**Note:** Check the buzzer polarity and operating specifications. This connection is intended for a suitable low-current passive piezo buzzer. Use a transistor driver if the buzzer requires more current than an Arduino pin can safely supply.

## 5. Activity 1 – Generate a Tone Using tone() and noTone()

### Arduino Program

```cpp
#define buzzerPin 8

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 1000);
  delay(1000);

  noTone(buzzerPin);
  delay(1000);
}
```

### Understanding the Program

**1. Pin Declaration**

```cpp
#define buzzerPin 8
```

Defines Digital Pin 8 as the buzzer output pin.

**2. Pin Configuration**

```cpp
pinMode(buzzerPin, OUTPUT);
```

Configures the buzzer pin as an output.

**3. Tone Generation**

```cpp
tone(buzzerPin, 1000);
```

Generates a square-wave signal with a frequency of 1000 Hz.

**4. Delay**

```cpp
delay(1000);
```

Keeps the tone active for one second.

**5. Stop Tone**

```cpp
noTone(buzzerPin);
```

Stops the tone generated on the buzzer pin.

### Expected Output

The buzzer produces a 1000 Hz tone for one second, followed by one second of silence. The sequence repeats continuously.

## 6. Activity 2 – Three-Tone Generator

In this activity, we generate three different frequencies to understand how frequency affects sound pitch.

### Arduino Program

```cpp
#define buzzerPin 8

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 500);
  delay(1000);

  tone(buzzerPin, 1000);
  delay(1000);

  tone(buzzerPin, 2000);
  delay(1000);

  noTone(buzzerPin);
  delay(1000);
}
```

### Understanding Frequency

Frequency is the number of signal cycles produced per second. It is measured in Hertz (Hz).

| Frequency | Expected Pitch |
|---|---|
| 500 Hz | Lower pitch |
| 1000 Hz | Medium pitch |
| 2000 Hz | Higher pitch |

### Expected Output

The buzzer generates:
1. A 500 Hz tone for one second.
2. A 1000 Hz tone for one second.
3. A 2000 Hz tone for one second.
4. One second of silence.

The sequence repeats.

## 7. Activity 3 – Twinkle, Twinkle, Little Star

In this activity, we use musical note frequencies to play a familiar melody using a passive buzzer.

We use individual `tone()` and `delay()` statements for each note, making the program easy to understand and modify.

### Musical Note Frequencies

| Musical Note | Frequency |
|---|---:|
| C4 | 262 Hz |
| D4 | 294 Hz |
| E4 | 330 Hz |
| F4 | 349 Hz |
| G4 | 392 Hz |
| A4 | 440 Hz |

### Melody Sequence

```text
C4  C4  G4  G4  A4  A4  G4
F4  F4  E4  E4  D4  D4  C4
```

### Arduino Program

```cpp
#define speakerPin 8

#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  tone(speakerPin, C4, 400);
  delay(400);

  tone(speakerPin, C4, 400);
  delay(400);

  tone(speakerPin, G4, 400);
  delay(400);

  tone(speakerPin, G4, 400);
  delay(400);

  tone(speakerPin, A4, 400);
  delay(400);

  tone(speakerPin, A4, 400);
  delay(400);

  tone(speakerPin, G4, 800);
  delay(800);

  tone(speakerPin, F4, 400);
  delay(400);

  tone(speakerPin, F4, 400);
  delay(400);

  tone(speakerPin, E4, 400);
  delay(400);

  tone(speakerPin, E4, 400);
  delay(400);

  tone(speakerPin, D4, 400);
  delay(400);

  tone(speakerPin, D4, 400);
  delay(400);

  tone(speakerPin, C4, 800);
  delay(800);

  noTone(speakerPin);
  delay(2000);
}
```

### Understanding the Program

- `#define C4 262` defines the frequency of the musical note C4.
- `tone(speakerPin, C4, 400)` generates the C4 note for 400 milliseconds.
- `delay(400)` allows the note duration to finish before moving to the next note.
- Different musical notes are generated by changing the frequency.
- `noTone(speakerPin)` stops tone generation.
- `delay(2000)` creates a two-second pause before the melody repeats.

### Expected Output

The passive buzzer plays the opening melody of *Twinkle, Twinkle, Little Star* and pauses for two seconds before repeating.

## 8. Experiment and Explore

1. Change the frequency from 500 Hz to 300 Hz and observe the pitch.
2. Increase the frequency to 3000 Hz.
3. Change the duration of each tone.
4. Create your own three-tone sequence.
5. Try playing another simple melody by changing the musical note frequencies.

## 9. Learning Outcomes

After completing this experiment, students will understand:

- The working principle of a passive buzzer.
- The difference between active and passive buzzers.
- How to use `tone()` to generate sound frequencies.
- How to use `noTone()` to stop sound generation.
- The relationship between frequency and pitch.
- Musical note frequencies.
- How to generate simple melodies using Arduino.

---

**Arduino Learning Series | Aariv Technologies**

*Build your Tech Skills*
