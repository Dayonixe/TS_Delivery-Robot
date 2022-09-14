int speakerPin = 7;

int length = 7; // nombres de notes
char notes[] = "ccaCaC"; // notes
int beats[] = {2, 2, 1, 2, 1, 4, 10};
int tempo = 100;

int playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

int playNote(char note, int duration) {
  char names[] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C'};
  int tones[] = {1915, 1700, 1519, 1432, 1275, 1136, 1014, 956};

  // Play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void music() {
  pinMode(speakerPin, OUTPUT);

  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // reset
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    delay(tempo / 2); // pause entre les notes
  }
}

void musicerror() {
  pinMode(speakerPin, OUTPUT);

  for (int i = 0; i < length; i++) {
    playNote('c', 1000);
    delay(1000); // pause entre les notes
  }
}

void musicklaxon() {
  pinMode(speakerPin, OUTPUT);

  for (int i = 0; i < 3; i++) {
    playNote('c', 100);
    delay(100); // pause entre les notes
  }
}
