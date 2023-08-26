// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  if (analogRead(A0) < 600 && 500 < analogRead(A0)) {
    Serial.println("no");
  }
  if (1000 < analogRead(A0)) {
    Serial.println("forward");
  }
  if (100 > analogRead(A0)) {
    Serial.println("backward");
  }
  if (analogRead(A1) < 600 && 450 < analogRead(A0)) {
    Serial.println("no");
  }
  if (1000 < analogRead(A1)) {
    Serial.println("vol-");
  }
  if (100 > analogRead(A1)) {
    Serial.println("vol+");
  }
  if (0 == analogRead(A2)) {
    Serial.println("vidcont");
  }
  if (0 != analogRead(A2)) {
    Serial.println("no");
  }
  delay(100); // Delay a little bit to improve simulation performance
}