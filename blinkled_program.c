// Pin connected to the LED
const int ledPin = 2; // You can change this pin according to your ESP32 board

void setup() {
  // Initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on (HIGH is the voltage level)
  delay(1000);                  // Wait for a second
  digitalWrite(ledPin, LOW);    // Turn the LED off by making the voltage LOW
  delay(1000);                  // Wait for a second
}
