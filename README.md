# Robotic Arm Project Showcase
## Summary:
I started this project in 2023 Summer, I wanted to create something that would help develop my skills in the field I want to eventually enter, with a big focus on coding. This showcase will go through the steps I took to create this robotic arm. I decided
to make this project unique by adding an Internet of Things aspect. I used a Bluetooth module to connect to a Windows application, which can completely control the arm and save actions over a specific period of time. 

## Mechanical Design:
The entire robotic arm was 3D Printed except for the screws, bearings, and electronics needed to assemble it. Since I wanted to focus mainly on the electronic and coding design of the project I decided to use an online 3D model to base my Robotic arm off of.
I first started by finding a suitable 3D model that I could use which I will link below. After that, I started 3D Printing the pieces, the 3D Printing took around 5 days for all the parts. I then could start assembling the robotic arm.

<pre>Mechanical Parts:                                                          Electronic Parts:
M3 x 8mm round head (34x)                                                  Arduino Uno R3

M3 x 10mm round head(61x)                                                  A4988 Stepper Motor Driver

M3 x 10mm countersunk (1x)                                                 PCA9685 PWM Servo Driver

M3 x 25mm round head(2x)                                                   BB400 Solderless BreadBoard

M3 x 16mm round head (4x)                                                  Jumper Wires

M3 nut (2x)                                                                HC-05 Bluetooth Chip

10mm x 30mm x 9mm bearing, 6200zz (2x)                                     4.8V 2400mAh NiMH Battery

8mm x 16mm x 5mm bearing, 688zz (3x)                                       11.1V 2200mAh 35C 3S LiPo Battery

8mm x 16mm x 5mm bearing, 688zz (2x)                                       6 MG996R Servor Motors

10mm steel balls (10x)                                                     DC 4.0V 1.2A Stepper Motor

M4 x 16mm round head(4x)
</pre>

<br><br><br>
### Here are some photos of the 3D Model assembly:

<image src="https://github.com/Bryanh002/Robotic-arm/assets/139603920/b8f6eafc-d0d6-46d4-91ea-c5f621b200da" width="350" height="625" align="top" align="left">
<image src="https://github.com/Bryanh002/Robotic-arm/assets/139603920/804deff8-dd3c-4b91-a91c-a836c73bb71d" width="350" height="650" align="right"> 
<br><br><br><br><br>




### These images show the progression made from the claw to the first joint of the robotic arm:


<image src="https://github.com/Bryanh002/Robotic-arm/assets/139603920/4f318afc-e834-4da9-b107-3b20a39063fd" width="275" height="375" align="top">
<image src="https://github.com/Bryanh002/Robotic-arm/assets/139603920/ccc58798-7d26-455c-949b-3f4e90435a09" width="500" height="400" align="right"> 

<br><br><br><br>
## Final Product
<kbd>
<image src="https://github.com/Bryanh002/Robotic-arm/assets/139603920/a83b80b4-6cf4-429d-b52a-60580ca7886d">
</kbd>

<br><br><br><br>

## Electrical Design:
This project was my first time fully working with electrical circuits, I will insert an image to help explain how my circuit works:

<kbd>
<image src="https://github.com/Bryanh002/Robotic-arm/assets/139603920/ab2e8af6-1ab4-425b-9570-6f144bbfcf38">
</kbd>

This photo shows the entirety of my electrical circuit, with the servo driver, stepper motor driver, and Bluetooth chip connected to the Arduino UNO. 
After finding the correct ports to connect those to, it was essentially just setting up a proper flow of current and voltage to power the driver's logic.
Both drivers have separate power sources for the driver power itself. 


<br><br><br><br>

## Coding:
In this repository are both coding files I used for this project. the Arduino Code is the C++ Code I wrote that handles the commands received from the Windows application and controls the arm accordingly.
The Windows application code was created using a Visual Studio Windows Form, the code essentially takes the input from the trackbars on the application and parses and converts it so that when its sent
to the Arduino, it will understand what actions to take. I also included a function to save actions and replay them.

### Windows Form:






