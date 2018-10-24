const int ledPin = 10;  //led no pino 10
const int Botao = 2;   //botao no pino 2
int EstadoBotao = 0;  //Variavel para ler o status do pushbutton

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(Botao, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  EstadoBotao = digitalRead(Botao); /*Novo estado do botão vai ser igual ao que
                                      Arduino ler no pino onde está o botão.
                                      Poderá ser ALTO (HIGH) se o botão estiver 
                                      pressionado,ou Baixo(LOW), se o botão estiver solto */
  
  if (EstadoBotao == HIGH){ //Se o botão estiver pressionado(HIGH)
    digitalWrite(ledPin,HIGH); //Acende o led do pino 10
  }else{                   //Se não estiver pressionado
    digitalWrite(ledPin,LOW); //Deixa o led do pino 10 apagado
  }
}
