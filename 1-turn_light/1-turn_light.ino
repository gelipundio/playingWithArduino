int greenLed1 = 2;
int greenLedDelay = 100;
void setup() {
  // put your setup code here, to run once:
  // configureGreenLed();
}

void loop() {
  // put your maincode here, to run repeatedly:
 // turnGreenOn();
}


void configureGreenLed() {
  pinMode(greenLed1, OUTPUT);
}

void turnGreenOn(){
  digitalWrite(greenLed1, HIGH);
  delay(greenLedDelay);
  digitalWrite(greenLed1, LOW);
  delay(greenLedDelay);
}
