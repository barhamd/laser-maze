int sensorPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorState = digitalRead(sensorPin);
  digitalWrite(LED_BUILTIN, sensorState);
  delay(1);  // delay in between reads for stability
}
