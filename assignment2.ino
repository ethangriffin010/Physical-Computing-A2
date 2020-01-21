void setup() {
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(analogRead(5));
  if(analogRead(0) < 700){
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
  }else if (analogRead(0) > 900){
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(8, LOW);
  }else{
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
  }
}
