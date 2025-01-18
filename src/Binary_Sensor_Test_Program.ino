/*
Simple program for use with Infrared binary reflective sensor.
FC-51, SEN0503, SEN0523, FE18-D50NK and E18-D80NK. All Open Collector output.

Jørgen Bo Madsen - V1 - September 2024 - dgmf@jorgen-madsen.dk
-------------------------------------------------------------------------------------------------
*/

const byte Sensor_Pin = 2;  // Digital D2 (no 5)


void setup() {
  Serial.begin(9600);
  pinMode(Sensor_Pin, INPUT_PULLUP);
}


void loop() {
  Serial.print(millis());
  if (digitalRead(Sensor_Pin) == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println(": Object detekted!"); 
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println(": Waiting for an object to reflect the IR beam!");
  }
  delay(100);
}
