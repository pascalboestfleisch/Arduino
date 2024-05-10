float Vout;
float Temp;
int LEDred = 13;
int LEDblue = 10;

void setup() {
  Serial.begin(9600);
  pinMode(LEDred, OUTPUT);
  pinMode(LEDblue, OUTPUT);
}

void loop() {
  Vout = analogRead(A0);
  Temp = (Vout*500)/1023;
  Serial.print("Temperature in C°: ");
  Serial.print(Temp);
  Serial.println();
  delay(1000);
  if (Temp <= 29) {
    digitalWrite(LEDred, LOW);
    digitalWrite(LEDblue, HIGH);
  }
  else {
    digitalWrite(LEDblue, LOW);
    digitalWrite(LEDred, HIGH);
  }
}