#define buttonPin   1
#define ledPin      2

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(115200);
}

void loop() 
{
  int buttonState = digitalRead(buttonPin);
  Serial.print("Button = ");
  Serial.println(buttonState);
  digitalWrite(ledPin, buttonState);
  delay(250);//included for debugging purposes
}
