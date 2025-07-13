// Define button input pins
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;

// Define LED output pins
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;

void setup() {
  // Set button pins as INPUT
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);

  // Set LED pins as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Read each button state and control the corresponding LED
  if (digitalRead(button1) == HIGH) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  if (digitalRead(button2) == HIGH) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  if (digitalRead(button3) == HIGH) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }
}
