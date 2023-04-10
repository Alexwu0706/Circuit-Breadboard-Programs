#define ReadingValue 14

void setup() {
  // put your setup code here, to run once:
  // identify your pin mode
  pinMode(ReadingValue,INPUT);
  // Computer and Arduino communication
  Serial.begin(115200); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int Value1 = analogRead(ReadingValue);
  // Convert analog reading into normal reading value
  float Value2 = Value1 * (5/1024.0);
  Serial.println(Value2);
  //delay the speed of reading the value in Tool -> Serial Monitor
  delay(5000);
  
}
