#define ledVer 13
#define ledAm 12
#define ledVerm 11


void setup() {
  pinMode(ledVer, OUTPUT);
  pinMode(ledAm, OUTPUT);
  pinMode(ledVerm, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVer, HIGH);
  digitalWrite(ledAm, LOW);
  digitalWrite(ledVerm, LOW);
  delay(1000);
  digitalWrite(ledVer, LOW);
  digitalWrite(ledAm, HIGH);
  digitalWrite(ledVerm, LOW);
  delay(2000);
  digitalWrite(ledVer, LOW);
  digitalWrite(ledAm, LOW);
  digitalWrite(ledVerm, HIGH);
  delay(2000);
  digitalWrite(ledVer, LOW);
  digitalWrite(ledAm, LOW);
  digitalWrite(ledVerm, LOW);
  delay(2000);
 
}
