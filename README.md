# Smart_Car_Parking_System_using_Arduino-Uno

![IMG_20211030_231319](https://user-images.githubusercontent.com/67807475/139852710-5440efa0-cf79-40c4-90c9-b2f8ffc62977.jpg)

SMART CAR PARKING SYSTEM USING ARDUINO UNO AND IR SENSOR
---------------------------------------------------------

ABSTRACT
--------
Smart Car Parking System is designed to provide a confusion free and easy parking. This project helps the drivers of the cars to park their vehicles with minimum wastage of time with accurate information of the availability of the space to park. It includes an Arduino Uno as the microcontroller unit to which the servo motors, LCD display with I2C module and IR sensors are interfaced. The LCD displays the availability of the space, the IR sensors keeps the check of the number of cars entering and exiting the parking space. 

THEORY
------
A Smart Car Parking System is a process through which car parking can be done more efficiently and easily than manual method. The system will provide the user better services. The system counts the number of cars in the garage and checks if there’s any vacancy. When vehicle enters, the display shows the number of vacant slot inside. When any vehicle leaves, the slot increases and shown on display. If the garage is full. The display will show a message regarding that. This whole process includes the use of Arduino, Display and IR. The IR sensor detects whether the vehicle is entering or leaving. The report then showed on display.

EQUIPMENTS
----------
1.	Arduino UNO
2.	IR Sensor
3.	LCD Screen with I2C module
4.	Servo Motor
5.	Bread Board
6.	Power Supply
7.	Connecting Wires

CIRCUIT DIAGRAM
----------------
![CIRCUIT DIAGRAM](https://user-images.githubusercontent.com/67807475/139867873-e2f157d7-bad7-4e2c-b6e8-d04e84ed1c60.png)

FLOWCHART
---------
![FLOWCHART](https://user-images.githubusercontent.com/67807475/139874377-e34104cf-200c-4972-95ec-406ee4d98ed0.png)

SYSTEM TESTING
--------------
I have tested the designed system with some toy car. There are two possibilities : 1.ENTRY: When a car want to entry in the parking slot first ir sensor will be detected. Then system will check if there is any vacant slot or not. If there is any vacant slot gate will be opened and slot no will be decreased. 2.EXIT: When a car want to exit in the parking slot first ir sensor will be detected. Gate will be opened and slot no will be increased.

PROTOTYPE
---------
![IMG_20211030_231119](https://user-images.githubusercontent.com/67807475/139875751-1fba1f8f-a7d6-4af4-92e8-fa9742d7d8a4.jpg)

EXPERIMENTAL RESULT
-------------------
I have experimented the system to gather some statistical results. After the experience, we have found all components and sensors work perfectly. As the result shows, the system is almost 100% correct. The whole experiment was done couple of times by me. The prototype was not always correct due to the limitations of the use of low quality sensors. But the performance was satisfactory enough.

REFERENCE
---------
https://store-usa.arduino.cc/collections/motors-servos/products/feetech-mini-servo-motor-120-degrees-9g
https://store-usa.arduino.cc/collections/boards/products/arduino-uno-rev3#
