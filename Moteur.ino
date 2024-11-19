const int potentiometre = A0;
const int LED = 5;
int valeur;
int Val_led;

void setup() {
  Serial.begin(9600);       
}

void loop() {
  valeur = analogRead(potentiometre);
  Serial.println(valeur);
  Val_led = map(valeur, 0, 1023, 0, 255);
  analogWrite(LED,Val_led);
  delay(100);
}