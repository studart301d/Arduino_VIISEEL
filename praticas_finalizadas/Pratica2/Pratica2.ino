const int pot = A5; //led no pino A5m
const int led = 9; //led no pino 9

int leitura; // Ler o pot

void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);//Pino do led será saída

}

void loop() {
  // put your main code here, to run repeatedly:

  leitura = map(analogRead(pot),0,1023,0,255); // map.
  analogWrite(led,leitura); // escreve no pino led o valor da leitura.

}
