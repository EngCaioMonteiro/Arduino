int red = 8;
int blue = 9;
int green = 10;
int estado;
int botao = 7;
int ande = 2;
int pare = 3;
int estadoanteriorbotao;
int tempopisca;
int estadopisca;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(ande, OUTPUT);
  pinMode(pare, OUTPUT);
  pinMode(botao, INPUT);
  estado = 1;
  estadoanteriorbotao = digitalRead(botao);
  tempopisca = 0;
  estadopisca = HIGH;
}

void loop() {

  botao = digitalRead(7);

  if ((botao == HIGH) && (estadoanteriorbotao == LOW))  {
    if (estado <= 3)  {
      estado = estado + 1;
    }
    else{
      estado = 1;
    }
  }

  estadoanteriorbotao = botao;
      
  if (estado == 1)  {
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
    digitalWrite(pare, HIGH);
    digitalWrite(ande, LOW);
    }
    
  if (estado == 2)  {
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(ande, LOW);
    digitalWrite(pare, HIGH);
    }
    
  if (estado == 3)  {
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(ande, HIGH);
    digitalWrite(pare, LOW);
    }

  if (estado == 4)  {
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(red, HIGH);
    tempopisca = tempopisca + 1;
    if (tempopisca == 400)  {
      estadopisca = !estadopisca;
      tempopisca = 0;
    }
    digitalWrite(ande, LOW);
    digitalWrite(pare, estadopisca);
    }

    delay(1);
    
}
