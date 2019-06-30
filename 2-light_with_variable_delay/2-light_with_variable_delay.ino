int led = 3;
int potPin = A0;
int potValue = 0;

void setup() {
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  digitalWrite(led, HIGH);
  delay(potValue);
  digitalWrite(led, LOW);
  delay(potValue);
}
