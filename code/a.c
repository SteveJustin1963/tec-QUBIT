/*      Annotated QRNGv1 Firmware V1.1
 * Author: Noah G. Wood
 * 
 * Copyright (c) 2019 Spooky Manufacturing, LLC
 * License: GPLv3.0
 * 
 */
int triggerPin = 2; // This pin will pulse our quantum circuit
int hPin = A0; // This pin measures the horizontal polarized photons
int vPin = A1; // This pin measures the vertically polarized photons
float H = 0;
float V = 0;
 
void setup() {
  // Just setting up triggerPin and serial connection
  pinMode(13, OUTPUT);
  pinMode(triggerPin, OUTPUT);
  Serial.begin(9600);
}
 
int Random() {
  // Pulse the laser
  digitalWrite(triggerPin, HIGH);
  delay(3);
  digitalWrite(triggerPin, LOW);
  // Read the photoresistors
  H = analogRead(hPin);
  V = analogRead(vPin);
  // Determine random bit
  if(H>V) { // More photons in the H mode, return 0
    return 0;
  } if(H < V) { // More photons in the V mode, return 1
    return 1;
  } else { 
    /* The same number of photons are in both modes!
        This is actually not an uncommon occurrence, for our
        purposes we will simply run the function recursively until
        a random bit can be generated.
     */
    Random();
  }
}
 
void loop() {
  // The main program
  // Run our program and print the random bit to serial
  Serial.print(Random());
}
