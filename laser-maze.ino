int sensorPin2 = 2;
int sensorPin3 = 3;
int sensorPin4 = 4;
int sensorPin5 = 5;
int sensorPin6 = 6;

int sensors[5] = {sensorPin2, sensorPin3, sensorPin4, sensorPin5, sensorPin6};

int sensorCount = sizeof(sensors) / sizeof(sensors[0]);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  for (int i = 0; i < sensorCount; i++) {
    pinMode(sensors[i], INPUT);
  }
}

void loop() {
  int brokenBeam = false;

  for (int i = 0; i < sensorCount; i++) {
    int sensorState = digitalRead(sensors[i]);

    if (sensorState == LOW) {
      brokenBeam = true;
      break;
    }
  }

  digitalWrite(LED_BUILTIN, brokenBeam ? HIGH : LOW);
  delay(1);  // delay in between reads for stability
}
