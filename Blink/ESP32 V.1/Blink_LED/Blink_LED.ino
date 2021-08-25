#define LED_Azul 2

void setup() {
  // put your setup code here, to run once:
  //Set pin Mode
  pinMode(LED_Azul, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_Azul, HIGH);
  delay(500);
  digitalWrite(LED_Azul, LOW);
  delay(500);
}

  //ESP32 V.1
