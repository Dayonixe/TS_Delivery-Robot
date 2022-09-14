const int motorPin = 9;
const int motorPiin = 8;

void droite() {
  pinMode(motorPin, OUTPUT);
  pinMode(motorPiin, OUTPUT);
  digitalWrite(motorPin, LOW);
  digitalWrite(motorPiin, HIGH);
}

void gauche() {
  pinMode(motorPin, OUTPUT);
  pinMode(motorPiin, OUTPUT);
  digitalWrite(motorPin, HIGH);
  digitalWrite(motorPiin, LOW);
}

void face() {
  pinMode(motorPin, OUTPUT);
  pinMode(motorPiin, OUTPUT);
  digitalWrite(motorPin, HIGH);
  digitalWrite(motorPiin, HIGH);
}

void arret() {
  pinMode(motorPin, OUTPUT);
  pinMode(motorPiin, OUTPUT);
  digitalWrite(motorPin, LOW);
  digitalWrite(motorPiin, LOW);
}
