const int lumos=2;
void setup(){
  pinMode(lumos, OUTPUT);
}
void loop(){
  digitalWrite(lumos, HIGH);
  delay(500);
  digitalWrite(lumos, LOW);
  delay(500);
}