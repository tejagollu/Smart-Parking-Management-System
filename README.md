# 🚗 Smart Parking Management System (Embedded Systems)

## 📌 Overview
The **Smart Parking Management System** is an embedded systems–based project that automates the monitoring of parking slots using **IR sensors** and a **microcontroller (Arduino UNO – ATmega328P)**.  
The system detects whether a parking slot is **occupied or free** and displays the availability in real time on an **LCD display**, reducing traffic congestion and manual effort.

---

## 🎯 Objectives
- Automate parking slot detection
- Reduce time spent searching for parking
- Display real-time parking availability
- Minimize human intervention
- Improve parking efficiency

---

## ⚙️ System Description
IR sensors are placed in each parking slot to detect vehicle presence.  
The microcontroller continuously reads sensor data, calculates available slots, and displays the information on a **16×2 LCD**.

---

## 🧠 Working Principle
1. IR sensor detects vehicle presence
2. Sensor sends signal to the microcontroller
3. Controller processes the data
4. LCD displays total slots and free slots

**IR Sensor Logic:**
- `LOW` → Slot Occupied  
- `HIGH` → Slot Free  

---

## 🧰 Hardware Requirements
- Arduino UNO (ATmega328P)
- IR Sensors
- 16×2 LCD Display
- Breadboard
- Connecting Wires
- Power Supply

---

## 💻 Software Requirements
- Arduino IDE
- Embedded C
- Git & GitHub

---

## 🔑 Features
- Real-time parking monitoring
- Low-cost embedded solution
- Simple and reliable design
- Easy to expand for more parking slots

---

## 📁 Project Structure
