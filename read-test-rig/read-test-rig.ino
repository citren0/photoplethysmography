void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float reading = ((float)analogRead(A1) / 1024.0) * 5.0;
  Serial.print("0.5,");
  Serial.print(reading, 4);
  Serial.print(",2.5\n");
  delay(40);
}
