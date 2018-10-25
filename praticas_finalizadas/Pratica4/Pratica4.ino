const int ledPin = 10;
const int ldrPin = A5;

int valorLDR;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  valorLDR = analogRead(ldrPin);

  if(valorLDR > 500){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin,LOW);
  }

}
