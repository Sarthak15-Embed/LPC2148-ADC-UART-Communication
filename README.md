# 📡 LPC2148 ADC Data Acquisition using UART

<p align="center">

![Language](https://img.shields.io/badge/Language-Embedded%20C-blue)
![Microcontroller](https://img.shields.io/badge/Microcontroller-ARM7%20LPC2148-orange)
![UART](https://img.shields.io/badge/Protocol-UART-green)
![ADC](https://img.shields.io/badge/Peripheral-ADC-red)
![LCD](https://img.shields.io/badge/Display-16x2%20LCD-blueviolet)
![Firmware](https://img.shields.io/badge/Firmware-Register%20Level-success)

</p>

---

# 📖 Project Overview

This project demonstrates **real-time ADC data acquisition and UART communication** using the **ARM7 LPC2148** microcontroller.

The LPC2148 continuously samples an analog input using its **10-bit internal ADC**, displays the converted value on a **16×2 LCD**, and simultaneously transmits the ADC data through **UART0** for real-time serial communication.

The firmware is developed in **Embedded C** using **register-level programming**.

---

# ✨ Features

* 10-bit ADC Data Acquisition
* UART0 Serial Communication
* 16×2 LCD Display
* Real-Time Analog Signal Monitoring
* Register-Level Embedded C Programming
* ARM7 LPC2148 Firmware Development

---

# 🛠 Hardware Requirements

* ARM7 LPC2148 Development Board
* Potentiometer / Analog Sensor
* 16×2 LCD
* UART Interface (USB-to-Serial)
* 3.3V Power Supply

---

# ⚙️ System Architecture

```text
Analog Input
      │
      ▼
LPC2148 ADC0
      │
      ▼
Digital ADC Value
      │
 ┌────┴────┐
 │         │
 ▼         ▼
UART0    16×2 LCD
```

---

# 📌 ADC Registers Used

| Register | Function                    |
| -------- | --------------------------- |
| AD0CR    | ADC Control Register        |
| AD0DR2   | ADC Channel 2 Data Register |
| AD0GDR   | Global ADC Result Register  |
| PINSEL1  | ADC Pin Configuration       |

---

# 📌 UART Registers Used

| Register | Function                  |
| -------- | ------------------------- |
| U0LCR    | Line Control Register     |
| U0DLL    | Baud Rate Divisor LSB     |
| U0DLM    | Baud Rate Divisor MSB     |
| U0THR    | Transmit Holding Register |
| U0RBR    | Receiver Buffer Register  |
| U0LSR    | Line Status Register      |

---

# 📂 Project Structure

```text
LPC2148-ADC-UART
│
├── README.md
├── main.c
├── Arm_ADC.c
├── Arm_ADC.h
├── Arm_UART.c
├── Arm_UART.h
├── Arm_LCD.c
└── Arm_LCD.h
```

---

# 🚀 Working Principle

1. Configure ADC0 Channel 2 for analog input.
2. Start ADC conversion.
3. Read the 10-bit ADC value.
4. Display the ADC value on the 16×2 LCD.
5. Transmit the ADC value using UART0.
6. Repeat continuously for real-time monitoring.

---

# 🎯 Skills Demonstrated

* Embedded C
* ARM7 LPC2148 Programming
* ADC Interfacing
* UART Communication
* LCD Interfacing
* Register-Level Programming
* Embedded Firmware Development

---

# 📈 Expected Output

* ADC continuously samples the analog input.
* The converted value is displayed on the LCD.
* The same ADC value is transmitted through UART0.
* LCD and UART update in real time as the analog input changes.

---

# 👨‍💻 Author

**Sarthak Pampattiwar**

**Technical Skills:** Embedded C • ARM7 LPC2148 • 8051 • PIC16F877A • UART • SPI • I²C • ADC • PWM • GPIO • Timers • Interrupts

---

⭐ **If you found this project useful, consider giving it a Star!**
