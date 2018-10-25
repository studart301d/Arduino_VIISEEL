const int ledPin = 10;
float estadoDistancia;
int intensidadeLed;

const int trigPin = 3;
const int echoPin = 2;

float distance();

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600); // Inicia o Serial , sendo o parâmetro a taxa de bits por segundo (geralmente usado 9600)
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadoDistancia = distance();
  intensidadeLed = map(estadoDistancia,0,20,0,255);

  analogWrite(ledPin,intensidadeLed);
  
}

float distance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin,LOW);

  float dist = pulseIn(echoPin,HIGH)*0.034/2 ;

  return dist;
}
