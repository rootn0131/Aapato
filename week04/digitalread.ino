int led_pin = 9;
int button_pin = 7;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
} 

void loop() {
  int value = digitalRead(button_pin);
  digitalWrite(led_pin, value);
  delay(10);
}
