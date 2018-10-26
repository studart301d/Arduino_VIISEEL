#include <Servo.h>

const int trigPin = 3; //Pino trig
const int echoPin = 2; //Pino echo

float distance(); 
float estadoDistancia;

Servo myservo;

int posicaoServo;

void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

  Serial.begin(9600);

  myservo.attach(9);

}

void loop() {
  estadoDistancia = distance();
  Serial.print("Distancia: ");
  Serial.println(estadoDistancia);

  if (estadoDistancia <= 15){
    posicaoServo = map(estadoDistancia,5,15,0,90);
  }else if(estadoDistancia > 15 && estadoDistancia <= 25) {
     posicaoServo = map(estadoDistancia,15,25,90,180);
   }
  myservo.write(posicaoServo);
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
