  void setup()  {
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
  }
  
  void loop() {
    analogWrite(11, 255);
    analogWrite(10, 204);
    analogWrite(9, 102);
    delay(1000);
    analogWrite(11, 51);
    analogWrite(10, 204);
    analogWrite(9, 255);
    delay(1000);
  }
