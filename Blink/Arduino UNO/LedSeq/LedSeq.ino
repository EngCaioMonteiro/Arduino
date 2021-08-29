void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT); 
  }

void loop() {
  
  int velocidade;
  velocidade = 200;
  
    digitalWrite(LED_BUILTIN, 1);
    delay(velocidade);
    digitalWrite(LED_BUILTIN, 0);
    digitalWrite(10,1);
    delay(velocidade);
    digitalWrite(10,0);
    digitalWrite(9, 1);
    delay(velocidade);
    digitalWrite(9, 0);
    digitalWrite(8,1);
    delay(velocidade);
    digitalWrite(8,0);
}
