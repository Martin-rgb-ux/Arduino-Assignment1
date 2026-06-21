int startValue = 5;
int ledPin = 13;

// Function to make the LED blink a specified number of times.
void flashLED(int times){
  int i = 0;
  while (i < times) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    i += 1;
  }

}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");
  int count = startValue;
  while(count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);       // Blink the LED.
    delay(1000);

    count -= 1;
  }
  
  Serial.println("=== Countdown Complete ===");
}

void loop() {
  
}
