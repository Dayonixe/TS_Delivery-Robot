#include "Buzzer.h"
#include "Ecran.h"
#include "Rotation.h"

int bob = 1;
int lleft = 0;
int left = 0;
int mid = 0;
int right = 0;
int rright = 0;
int nada = 1;
int geoLoc = 0;

void setup() {
}

void loop() {
  hello();

  if (bob == 1) {
    face();
    music();

    if (left == 1) {
      droite();
      face();
      gauche();
      face();
      gauche();
      face();
      droite();
    } else if (mid == 1) {
      arret();
      musicklaxon();
    } else if (right == 1) {
      gauche();
      face();
      droite();
      face();
      droite();
      face();
      gauche();
    } else if (nada == 1) {
      face();
    }

    if (geoLoc == 1) {
      gauche();
    } else if (geoLoc == 2) {
      droite();
    } else if (geoLoc == 0) {
      face();
    }
  } else if (bob == 0) {
    error();
    musicerror();
  }
}
