# Ultrasonic Distance Meter with LCD Display

## Project Overview

This project implements an Ultrasonic Distance Meter using Arduino Uno, HC-SR04 Ultrasonic Sensor, and a 16x2 LCD Display. The system measures the distance between the sensor and an object and displays the measured value on the LCD screen in real time.

## Objective

To accurately measure the distance of nearby objects using ultrasonic waves and display the distance on an LCD screen.

## Components Used

* Arduino Uno R3
* HC-SR04 Ultrasonic Sensor
* 16x2 LCD Display
* 10k Potentiometer
* Breadboard
* Jumper Wires

## Circuit Connections

### HC-SR04 Ultrasonic Sensor

* VCC → 5V
* GND → GND
* TRIG → Digital Pin 9
* ECHO → Digital Pin 10

### LCD Display

* RS → Digital Pin 12
* E → Digital Pin 11
* D4 → Digital Pin 5
* D5 → Digital Pin 4
* D6 → Digital Pin 3
* D7 → Digital Pin 2
* VCC → 5V
* GND → GND
* VO → Potentiometer Middle Pin

### Potentiometer

* Left Pin → GND
* Middle Pin → LCD VO
* Right Pin → 5V

## Working Principle

The HC-SR04 sensor sends ultrasonic waves and waits for the reflected echo signal. The Arduino calculates the distance based on the travel time of the sound wave. The measured distance is then displayed on the 16x2 LCD screen and also printed on the Serial Monitor.

## Features

* Real-time Distance Measurement
* LCD Display Output
* High Accuracy Measurement
* Low Cost Implementation
* Easy to Build and Understand

## Applications

* Obstacle Detection Systems
* Robotics
* Parking Assistance Systems
* Industrial Automation
* Smart Monitoring Systems

## Results

The system successfully measures distances and displays the values on the LCD screen in centimeters.

## Future Enhancements

* Distance Measurement in Multiple Units
* Buzzer Alert for Short Distances
* IoT-Based Distance Monitoring
* Wireless Data Transmission

## Software Used

* Tinkercad Circuits
* Arduino IDE
* GitHub

## Author

Harini
