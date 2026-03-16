# ESP32-C3 Custom Development Board

A compact, custom-designed ESP32-C3 development board with USB-C connectivity, onboard antenna, and a clean PCB layout.

---

## 3D Render

<img width="1280" height="720" alt="image" src="https://github.com/user-attachments/assets/a853d9cb-6e44-4bbc-8392-f7c2953b604e" />


The board features a USB-C connector on the left side, two tactile switches (BOOT and EN), the ESP32-C3 QFN package at the center-right, a PCB trace antenna on the far right, and a 4-pin UART header (3V3, RXD, TXD, GND) along the bottom edge. All passives are 0402/0603 for a tight layout.
with onboard temp humidity barometer and pressure
---

## PCB Layout

### 3d Render

![alt text](image-5.png)

### Front Copper

![alt text](image-1.png)

### Back Copper

![alt text](image-2.png)

### IN 1

![alt text](image-3.png)

### IN 2

![alt text](image-4.png)

### Board Outline

![alt text](image.png)

---

## Features

- **Microcontroller:** ESP32-C3 (RISC-V single-core, up to 160 MHz)
- **Wireless:** 2.4 GHz Wi-Fi 4 and Bluetooth 5 (LE)
- **USB-C:** For power and programming, no external UART adapter needed
- **PCB Antenna:** Integrated trace antenna, no external module required
- **UART Header:** 4-pin breakout (3V3, RXD, TXD, GND) for serial debugging
- **Buttons:** BOOT and EN (reset) tactile switches
- **Power:** USB 5V input with onboard 3.3V regulation
- **Form Factor:** Compact two-layer board, hand-solderable with hot air

---

## Pin Header

| Pin | Function |
|-----|----------|
| 1   | +3V3     |
| 2   | RXD      |
| 3   | TXD      |
| 4   | GND      |

---

## Getting Started

1. Connect the board via USB-C to your computer.
2. Install the [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32c3/get-started/) toolchain or use the Arduino core for ESP32.
3. Hold the BOOT button while pressing EN to enter download mode.
4. Flash your firmware and hit EN to run.

For serial debugging without USB, wire up the 4-pin UART header to any USB-to-serial adapter at 3.3V logic levels.



## License

Hardware design files are provided as-is. Use at your own risk. Feel free to fork, modify, and build on this design for personal or commercial projects.


To make this 
Please download the esp32.zip(gerber files)
go to jlcpcb upload
upload the BOM AND cpl files and order!!
that simple

# Bill of Materials (BOM)

| Comment | Designator | Footprint | JLCPCB Part # |
|----------|------------|------------|---------------|
| W25Q128JVP | U2 | Winbond_USON-8-2EP_3x4mm_P0.8mm_EP0.2x0.8mm | C2999380 |
| RESET | SW2, SW1 | SW_SPST_TS-1088-xR020 | C778164 |
| 27pF | C1, C2 | 0603 | C1656 |
| 470Ω | R3, R4 | 0402 | C25117 |
| USBLC6-2P6 | U3 | SOT-666 | C15999 |
| 10µF | C14, C15, C3, C7 | 0805 | C440198 |
| 100nF | C4, C5, C6, C8, C9 | 0402 | C1525 |
| 5.1KΩ | R2, R5, R6, R7, R8, R9 | 0402 | C25905 |
| ESP32-C3 | U1 | QFN-32-1EP_5x5mm_P0.5mm_EP3.7x3.7mm | C2838500 |
| 22Ω | R1 | 0402 | C25092 |
| 100nF | C10, C11, C12, C13, C16, C18, C19 | 0603 | C14663 |
| USB_C_Receptacle_USB2.0_14P | J1 | USB_C_Receptacle_HCTL_HC-TYPE-C-16P-01A | C2997432 |
| MS5611-01BA | U4 | LGA-8_3x5mm_P1.25mm | C15639 |
| 2.2µF | C17 | 0603 | C23630 |
| 2.2nH | L1, L2, L3 | 0402 | C6652831 |
| SPX3819M5-L-3-3 | U5 | SOT-23-5 | C20617301 |
| 3.3pF | C20, C21 | 0402 | C1565 |
| Crystal_GND24 | Y2 | Crystal_SMD_3225-4Pin_3.2x2.5mm | C5444549 |
| SHTC3 | U6 | Sensirion_DFN-4-1EP_2x2mm_P1mm_EP0.7x1.6mm | C2880044 |

---

## Cost Breakdown

- PCB Fabrication Cost: **$10 USD**
- Total Cost (Including Shipping): **$~ 162 USD**

# How to use it / assemble it
Go to jlcpcb upload gerber select pcba 
give the cpl and desgnator files
order it
wait 
and there u have it 
connect usb c cable use arduino ide thonny esp32 tool whatever u want lol
---
