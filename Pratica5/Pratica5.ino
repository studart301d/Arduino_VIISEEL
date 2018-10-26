void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

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
