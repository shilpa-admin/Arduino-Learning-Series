# Arduino IDE Installation on macOS

**Arduino Learning Series | Aariv Technologies**

## Introduction

This guide explains how to download, install and configure Arduino IDE on a Mac computer and prepare it for programming an Arduino UNO.

The installation demonstration uses Arduino IDE 2.3.10.

## Installation Overview

![Arduino IDE Installation on macOS](Arduino_IDE_Mac_Installation.png)

## 1. System Requirements

- Mac computer (Apple Silicon or Intel)
- macOS
- Internet connection
- Arduino UNO board
- USB data cable

## 2. Download Arduino IDE

1. Visit the official website: https://www.arduino.cc/en/software
2. Locate Arduino IDE 2.x.
3. Select the macOS download.
4. Choose the appropriate version:
   - Apple Silicon for M-series Macs
   - Intel for Intel-based Macs
5. Download the `.dmg` installer.

## 3. Install Arduino IDE

1. Open the Downloads folder.
2. Double-click the downloaded `.dmg` file.
3. Drag Arduino IDE into Applications.
4. Wait for the installation to complete.
5. Open Arduino IDE from Applications.

## 4. Explore the IDE

Important interface elements:

- **Verify:** Compiles and checks your program.
- **Upload:** Uploads the compiled program to Arduino.
- **Board Selector:** Selects the target development board.
- **Code Editor:** Used to write Arduino programs.
- **Output Panel:** Displays compilation and upload messages.
- **Serial Monitor:** Displays serial communication data.
- **Serial Plotter:** Displays numerical data graphically.

## 5. Connect Arduino UNO

1. Connect Arduino UNO to your Mac using a USB data cable.
2. Open the board selector.
3. Select Arduino UNO.
4. Select the port corresponding to your connected board.

On macOS, serial ports commonly appear with names beginning with `/dev/cu.`. The exact name depends on the board and USB interface.

## 6. Test the Installation

1. Open a new sketch.
2. Select File → Examples → 01.Basics → Blink.
3. Select Arduino UNO and the connected port.
4. Click Verify.
5. Click Upload.
6. Observe the built-in LED blinking.

A successful upload confirms that the IDE and board connection are working.

## 7. Troubleshooting

**Board not detected**
- Check the USB data cable.
- Try another USB port or adapter.
- Check the available serial ports.
- Some compatible boards may require a USB-to-serial driver.

**Upload failed**
- Confirm board and port selection.
- Close Serial Monitor before uploading.
- Reconnect the board and select the currently available port.

**Permission error**
- Check the Sketchbook location in Arduino IDE Preferences.
- Review macOS Files & Folders permissions if required.

## Learning Outcome

After completing this installation, learners should be able to:

- Install Arduino IDE on macOS.
- Connect Arduino UNO to a Mac.
- Select the correct board and port.
- Verify and upload an Arduino program.

---

**Aariv Technologies**

*Build Your Tech Skills*
