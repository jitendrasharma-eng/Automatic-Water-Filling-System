# Automatic-Water-Filling-System
The Automatic Water Filling System is designed to monitor and control the water level in a Tank/pot using an ultrasonic sensor (USS) and infrared (IR) sensors. The system activates a solenoid valve when the water level is low and deactivates it when the tank/pot reaches the desired level.

Project Description
The system monitors the water level inside a container and ensures that it stays within a predefined range using sensors.

How It Works
The ultrasonic sensor (USS) measures the distance between the sensor and the water surface to determine the current water level (X).
Multiple infrared sensors (IR1 to IR10) detect the water level from different points and sum up their readings to get another water level measurement (Y).
The difference between the expected (X) and detected (Y) water level is calculated as Z = X - Y.
If X > Z and Y ≠ 0, the solenoid valve activates to allow water flow.
When the water level reaches the required height (X < Z), the solenoid valve deactivates to stop water flow.

 Hardware Requirements
Microcontroller (Arduino)
Ultrasonic Sensor (HC-SR04 or equivalent)
Infrared Sensors (10 IR sensors for level detection)
Solenoid Valve
Relay Module (for solenoid control)
Power Supply (12V/5V depending on components)
Water Tank or any pot

Features
Automatic water level detection
Prevents water overflow
Uses ultrasonic and infrared sensors for accuracy
Energy-efficient control with solenoid valve

[Jitendra Sharma] (GitHub: https://github.com/jitendrasharma-eng/Automatic-Water-Filling-System.git)
