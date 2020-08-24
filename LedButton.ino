int botao = 0;

void setup()
{
  pinMode(7, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  botao = digitalRead(7);
  if (botao == 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
