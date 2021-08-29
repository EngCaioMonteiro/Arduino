void setup() {

  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  int botao = digitalRead(7);

  digitalWrite(8, botao);
  digitalWrite(9, !botao);
}
