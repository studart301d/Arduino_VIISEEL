const int pot = A5; //pot no pino A5m
const int led = 10;//led no pino 9

int ledPotencia;
// Ler o map

void setup() {
  pinMode(led,OUTPUT);
  //Pino do led será saída

}


void loop() {
  // put your main code here, to run repeatedly:
  ledPotencia = map(analogRead(pot),0,1023,0,255);
  // map
  analogWrite(led,ledPotencia);
  // escreve no pino led o valor da leitura.

}
