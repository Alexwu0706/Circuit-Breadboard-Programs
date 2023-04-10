#define LED_1 13
#define LED_2 12
#define LED_3 11
#define LED_4 10
#define POT 14

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(POT,INPUT);
  Serial.begin(9600);
}

int val;
int ADC_Max = 1023;
 
void loop() {
  // put your main code here, to run repeatedly:
  //val = map(val,200,ADC_Max,0,4);
  val = analogRead(POT);
  Serial.println(val);

  //Same Ground
  /*if (val > 200){
    digitalWrite(LED_1,HIGH);
  }else{
    digitalWrite(LED_1,LOW);
  }
  
  if (val > 400){
    digitalWrite(LED_2,HIGH);
  }else{
    digitalWrite(LED_2,LOW);
  }

  if (val > 600){
    digitalWrite(LED_3,HIGH);
  }else{
    digitalWrite(LED_3,LOW);
  }

  if (val > 800){
    digitalWrite(LED_4,HIGH);
  }else{
    digitalWrite(LED_4,LOW);
  }*/
 
  //Same Ground 2
  if (val > 200 && val < 400){
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
  }else if(val >= 400 && val < 600){
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
  }else if(val >= 600 && val < 800){
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,LOW);
  }else if(val >= 800 && val <= ADC_Max){
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,HIGH);
  }else{
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
  }

  //Different Ground 
  //Ground determines the number of pin to be responded
  
  delay(20);
}
