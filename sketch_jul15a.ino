void setup() {
  pinMode (16,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (2,OUTPUT);
}

void loop() {
  digitalWrite (16, HIGH);
  delay (100);
  digitalWrite (4,HIGH);
  delay (100);
  digitalWrite (2,HIGH);
  delay (100);
  digitalWrite (16,LOW);
  delay (100);
  digitalWrite (4,LOW);
  delay (100);
  digitalWrite (2,LOW);
  delay (100);
}
  
