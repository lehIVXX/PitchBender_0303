void setup() {
  Serial.begin(115200);
  for (int i = 0; i < N_BUTTONS; i++) {
    pinMode(BUTTON_PIN[i],    INPUT_PULLUP);
  }
	pinMode(trigPin, OUTPUT); 
	pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  while (millis() < 5000) {
    potVal = analogRead(POT_PIN);
    if (potVal > potMax) {
      potMax = potVal;
    }
    if (potVal < potMin) {
      potMin = potVal;
    }
  }
  digitalWrite(13, LOW);
	loopCount = 0;
  startTime = millis();
}