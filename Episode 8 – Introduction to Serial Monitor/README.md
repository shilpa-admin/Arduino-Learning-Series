# Episode 8 – Introduction to Serial Monitor

## 1. Objective

In this episode, we will learn how to use the Serial Monitor in Arduino IDE to display information from an Arduino UNO on a computer.

The Serial Monitor helps us observe program execution, display variable values and debug Arduino projects.

In this experiment, Arduino continuously prints an increasing numerical value at an interval of 500 milliseconds.

## 2. Components Required

| Component | Quantity |
|---|---:|
| Arduino UNO | 1 |
| USB cable | 1 |
| Computer with Arduino IDE | 1 |

## 3. Circuit Diagram

No external circuit or additional components are required for this experiment.

Connect the Arduino UNO to your computer using a USB cable.

## 4. Arduino Program

```cpp
// Episode 8: Introduction to Serial Monitor

int j = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(j);
  j = j + 1;
  delay(500);
}
```

## 5. Understanding the Program

### 1. Variable Initialization

```cpp
int j = 0;
```

Creates an integer variable named `j` and initializes it to zero.

### 2. Serial Communication

```cpp
Serial.begin(9600);
```

Initializes serial communication between Arduino and the computer at a baud rate of 9600 bits per second.

### 3. Printing Output

```cpp
Serial.println(j);
```

Displays the current value of `j` in the Serial Monitor.

`println()` prints the value and moves the cursor to the next line.

### 4. Incrementing the Variable

```cpp
j = j + 1;
```

Increases the variable value by one during every loop execution.

### 5. Delay

```cpp
delay(500);
```

Introduces a delay of 500 milliseconds before the next loop iteration.

## 6. How to Open the Serial Monitor

1. Connect Arduino UNO to your computer using a USB cable.
2. Open the Arduino IDE.
3. Select the correct board: Arduino UNO.
4. Select the correct COM port or serial port.
5. Upload the program.
6. Open the Serial Monitor using the Serial Monitor icon or Tools → Serial Monitor.
7. Set the baud rate to **9600 baud**.

## 7. Expected Output

The Serial Monitor displays an increasing sequence:

```text
0
1
2
3
4
5
6
7
8
9
10
...
```

A new number appears approximately every 500 milliseconds.

## 8. Experiment and Explore

Try these activities:

1. Change `delay(500)` to `delay(1000)` and observe the output speed.
2. Change the initial value of `j` from 0 to 100.
3. Replace `Serial.println(j)` with `Serial.print(j)`. Observe the difference.
4. Print a message such as `Hello Arduino!` using `Serial.println()`.
5. Change the baud rate to 115200 in both the program and Serial Monitor.

## 9. Learning Outcomes

After completing this experiment, students will understand:

- Serial communication in Arduino.
- The purpose of `Serial.begin()`.
- The difference between `Serial.print()` and `Serial.println()`.
- How to display variable values.
- Baud rate and serial communication speed.
- Using Serial Monitor for debugging.

---

**Arduino Learning Series | Aariv Technologies**

*Build your Tech Skills*
