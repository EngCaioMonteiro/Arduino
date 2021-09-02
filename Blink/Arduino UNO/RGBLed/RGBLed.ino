void setup () {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop () {
  digitalWrite(11, HIGH);
  delay(150);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(150);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(150);
  digitalWrite(11, HIGH);
  delay(150);
  digitalWrite(10, HIGH);
  delay(150);
  digitalWrite(11, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(150);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(150);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(150);
  digitalWrite(10, LOW);

  
}
