#include <Servo.h>
Servo fingerServo;
int sensorPin = A4; // select the input pin for the potentiometer
int sensorValue = 0; // variable to store the value coming from the sensor
int average = 0;
void setup() {
 // declare the ledPin as an OUTPUT:
 pinMode(ledPin, OUTPUT);
 fingerServo.attach(9);
 Serial.begin(9600);
}
void loop() {
 // read the value from the sensor:
 average = analogRead(sensorPin);
 Serial.println(average);
 if (average >= 120) {
 fingerServo.write(130);
 delay(2);
 }
 else if (average <= 100 ) {
 fingerServo.write(0);
 delay(2);
}