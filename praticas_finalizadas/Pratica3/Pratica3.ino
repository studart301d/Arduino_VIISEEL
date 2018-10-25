void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Inicia o Serial , sendo o parâmetro a taxa de bits por segundo (geralmente usado 9600) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Minicurso de Arduino - ");
  Serial.println("VII SEEL");
  delay(700);
}
