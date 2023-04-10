#define pinNumber1 13
#define pinNumber2 12
#define pinNumber3 11
#define pinNumber4 10
#define pinNumber5 9
#define pinNumber6 8

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNumber1,OUTPUT);
  pinMode(pinNumber2,OUTPUT);
  pinMode(pinNumber3,OUTPUT);
  pinMode(pinNumber4,OUTPUT);
  pinMode(pinNumber5,OUTPUT);
  pinMode(pinNumber6,OUTPUT);
  Serial.begin(9600);
  //int numberP = 3;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinNumber1,HIGH);
  delay(100);
  digitalWrite(pinNumber1,LOW);
  digitalWrite(pinNumber2,HIGH);
  delay(100);
  digitalWrite(pinNumber2,LOW);
  digitalWrite(pinNumber3,HIGH);
  delay(100);
  digitalWrite(pinNumber3,LOW);
  digitalWrite(pinNumber4,HIGH);
  delay(100);
  digitalWrite(pinNumber4,LOW);
  digitalWrite(pinNumber5,HIGH);
  delay(100);
  digitalWrite(pinNumber5,LOW);
  digitalWrite(pinNumber6,HIGH);
  delay(100);
  digitalWrite(pinNumber6,LOW);
}
