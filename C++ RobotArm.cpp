#include <SoftwareSerial.h>
#include <Servo.h>
#include <HCPCA9685.h>

//Set up bluetooth based off pins in the Arduino UNO board. 0 = BluetoothTx, 1 = BluetoothRx
SoftwareSerial Bluetooth(0, 1); 

#define  I2CAdd 0x40
HCPCA9685 HCPCA9685(I2CAdd);

void setup() 
{
  /* Initialize the library and set it to 'servo mode' */ 
  HCPCA9685.Init(SERVO_MODE);
 
  /* Wake the device up */
  HCPCA9685.Sleep(false);

  Serial.begin(4800);
  
  delay(3000);
}


Servo servo01,servo02,servo03,servo04,servo05,servo06;

//initial parking position of the motor
const int servo01PPos = 60;
const int servo02PPos = 60;
const int servo03PPos = 70;
const int servo04PPos = 47;
const int servo05PPos = 63;
const int servo06PPos = 63;

//Degree of robot servo sensitivity - Intervals
int servo01Pos_increment = 20;
int servo02Pos_increment = 20;
int servo03Pos_increment = 20;
int servo04Pos_increment = 50;
int servo05Pos_increment = 60;
int servo06Pos_increment = 40;

//Keep track of the current value of the motor positions
int servo01Pos_i = servo01PPos;
int servo02Pos_i = servo02PPos;
int servo03Pos_i = servo03PPos;
int servo04Pos_i = servo04PPos;
int servo05Pos_i = servo05PPos;
int servo06Pos_i = servo06PPos;


//Minimum and maximum angle of servo motor
int servo01_min_pos = 10;
int servo01_max_pos = 180;

int servo02_min_pos = 10;
int servo02_max_pos = 180;

int servo03_min_pos = 10;
int servo03_max_pos = 400;

int servo04_min_pos = 10;
int servo04_max_pos = 380;

int servo05_min_pos = 10;
int servo05_max_pos = 380;

int servo06_min_pos = 10;
int servo06_max_pos = 120;

int servo01_pos = 0;
int servo02_pos = 0;
int servo03_pos = 0;
int servo04_pos = 0;
int servo05_pos = 0;
int servo06_pos = 0;

char state = 0; // Changes value from ASCII to char
int response_time = 5;
int response_time_4 = 2;
int loop_check = 0;
int response_time_fast = 20;
int action_delay = 600;
String dataln = "";

// Check for incoming data
  if (Bluetooth.available() > 0) {
    dataIn = Bluetooth.readString(); } // Read the data as string

