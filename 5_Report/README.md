
# SEVEN SEGMENT DISPLAY USING ATMEGA 328

# Introduction
Seven segment displays are a type of output display device that can display data in the form of images, text, or decimal numbers as an alternative to more complicated dot matrix displays. Digital clocks, simple calculators, electronic metres, and other electronic devices that show numerical information all use it. It is made up of seven segments of light emitting diodes (LEDs) that are connected in a number 8 pattern.

 ![image](https://user-images.githubusercontent.com/88073170/164448872-b2a6ebc5-e43e-405b-ae68-1702dc291ece.png)


# Working:
As an alternative to more complicated dot matrix displays, seven segment displays are a sort of output display device that can display data in the form of graphics, text, or decimal numbers. It's used in digital clocks, basic calculators, electronic metres, and other electronic devices that display numerical data. It consists of seven segments of light emitting diodes (LEDs) connected in a number eight pattern.
As a result, for each decimal digit that requires light emitting diodes (LEDs), Boolean expressions are ON or OFF. 6, 2, 5, 5, 4, 5, 6, 3, 7, and 6 are the number of segments utilised by the digits 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9. Different types of microcontrollers are useful to connect with these other devices, such as switches, keypads, and memory, because seven segment displays must be controlled by other external devices.

 ![image](https://user-images.githubusercontent.com/88073170/164448902-a415b89d-b752-4761-8bc2-82d2bffcbc2a.png)


# Types:
There are two sorts of seven segment display configurations: common anode display and common cathode display, depending on the application.
All of the cathode connections of LED segments in common cathode seven segment displays are linked to logic 0 or ground. Through forward bias the various anode terminals a to g, we apply logic 1 through a current limiting resistor. In a common anode seven segment display, all of the LED segments' anode connections are wired to logic 1. We apply logic 0 to the cathode of each segment a to g through a current limiting resistor. Because logic circuits may sink more current than they can source, common anode seven segment displays are more prevalent than cathode seven segment displays.

# Applications :
•	Digital clocks
•	Clock radios
•	Calculators
•	Wristwatchers
•	Speedometers
•	Motor-vehicle odometers
•	Radio frequency indicators
 

# SWOT ANALYSIS
# STRENGTH
* The ATmega328P is an 8-bit AVR microcontroller with strong performance and low power consumption.
* Superior RISC design, it can execute the most powerful commands in a single clock cycle.
* It's a CPU that's typically seen in Arduino boards like the Arduino Fio and Arduino Uno.
# WEAKNESS
* Processors are easier to operate since they employ 8bit and 16bit instead of the more difficult 32/64bit.
* With 32k bytes of onboard self-programmable flash programme memory and 23 programmable I/O lines, it may be used without any external computational components.
* The arithmetic logic unit (ALU) is directly coupled to all 31 registers, making it 10 times quicker than traditional CISC microcontrollers.
* AVR improved RISC instruction set optimised
# OPPURTUNITY
Based on the AVR improved RISC architecture, the ATmega328P is a low-power CMOS 8-bit microcontroller. The ATmega328P achieves throughputs of around 1 million instructions per second per MHz. In a single clock cycle, strong instructions are executed. This makes it simple for system designers to balance power consumption and processing speed. Because of its use in the Arduino UNO board, the ATMega328p is one of Atmel's most well-known MCUs. The ATmega328P was created with minimal current consumption in mind. Internal flash memory is 32 kilobytes, EEPROM is 1 kilobyte, and SRAM is 2 kilobytes.

# THREAT
* High up-front costs
* Performance standardization has not yet been streamlined.

# TEST PLAN AND OUTPUT #


# Table No 1: High level test plan

|Test ID |	Description	Exp I/P	Exp O/p |
|------- |  --------------------------- |
| H_01 | Check if program is running or not.|
| H_02 | Check if circuit connection is correct or not |
| H_03 | check if running or not |

# Table No 2: Low level test plan
|Test ID |	Description	Exp I/P	Exp O/p |
|------- | ---------------------------- |
|L_01 |	requirements should be appropriate |
|L_02 |	required software showld be uploaded.|
|L_03	| should set a correct directory path |

# Who
For common people

# What
Seven segment display

# When
At the time of execution

# Where
In Simulide

# How
By using Atmega328

# LOW LEVEL REQUIREMENT
 HADWARE COMPONENT
* ATmega328
* 7 Segment LED Display
* General Purpose Transistor NPN
* Through Hole Resistor, 680 ohm
* 16 MHz Crystal
* Capacitor 1000 pF
* Resistor 10k ohm
* SparkFun USB to Serial Breakout - FT232RL
* SparkFun USB to Serial Breakout - FT232RL

# HIGH LEVEL REQUIREMENT
* AVR compiler,simule ide


# Circuit diagram :
![image](https://user-images.githubusercontent.com/88073170/164448828-828d937b-c20c-4678-83e8-a8a405f5900f.png)

   
# Output:
![image](https://user-images.githubusercontent.com/88073170/164448951-cd19c0a1-0d41-4982-8a70-4f1a22b14b7c.png)

# Explanation :

Here Atmega 328-2 is used,a keypad is connected to atmega pins by using the connecting wires and then atmega is connected to several resistors of 100 ohm and then they are individually  connected to a seven segment display and then it is grounded.
