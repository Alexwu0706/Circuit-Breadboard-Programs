#define LED_1 13
#define LED_2 12
#define LED_3 11
#define LED_4 10
#define POT 14

int speedRate[8] = {10,50,100,200,400,600,800,1000};

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(POT,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int val = analogRead(POT);
  int delayRate = 0;
  
  //if statement to determine delay rate
  if (val < 100){
    delayRate = speedRate[0];         
  }else if(val >= 100 && val < 200){
    delayRate = speedRate[1];         
  }else if(val >= 200 && val < 300){
    delayRate = speedRate[2];         
  }else if(val >= 300 && val < 400){
    delayRate = speedRate[3];         
  }else if(val >= 400 && val < 500){
    delayRate = speedRate[4];         
  }else if(val >= 500 && val < 600){
    delayRate = speedRate[5];         
  }else if(val >= 600 && val < 700){
    delayRate = speedRate[6];         
  }else{
    delayRate = speedRate[7];         
  }
              
  // put your main code here, to run repeatedly:
  digitalWrite(LED_1,HIGH);
  delay(delayRate);
  digitalWrite(LED_1,LOW);
  digitalWrite(LED_2,HIGH);
  delay(delayRate);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,HIGH);
  delay(delayRate);
  digitalWrite(LED_3,LOW);
  digitalWrite(LED_4,HIGH);
  delay(delayRate);
  digitalWrite(LED_4,LOW);
}
