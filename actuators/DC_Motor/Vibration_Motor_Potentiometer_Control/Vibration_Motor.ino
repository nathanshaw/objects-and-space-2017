/*
  Code for controlling a simple DC Motor with a potentiometer 
 
 Programmed by Nathan Villicana-Shaw in the Fall of 2018 for 
 the California College of the Arts Interaction Design department.

 Please Note
 ----------------
 This program is intended for demoing a vibration motor but can work with any kind of motor
 
*/

// a constant integer to keep track of what pin the motor is connected to
const int v_motor = 5;

void setup() {
 pinMode(v_motor, OUTPUT); // set the v_motor pin as an output
 Serial.begin(57600);      // allow for print statements
}


void loop() {
  analogWrite(v_motor, random(255)); // set the motor to a random velocity
  delay(1000);                       // for one second
  digitalWrite(v_motor, LOW);        // then turn the motor off
  delay(random(10000));              // for a random period of time of up to ten seconds
}
