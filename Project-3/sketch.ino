const int led1=5;
const int led2=18;
const int led3=19;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
  Serial.println("BASIC TRAFFIC LIGHT");
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  delay(5000);
  digitalWrite(led1,LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3,LOW);
  delay(2000);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3, HIGH);
  delay(5000);
}
