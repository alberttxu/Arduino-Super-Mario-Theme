#include "pitches.h"

int notecount = 69;

// notes in the melody:
int melody[] = {
  NOTE_C3, NOTE_C4, NOTE_A2, NOTE_A3, NOTE_AS2, 
NOTE_AS3, 0, 0, 0, NOTE_C3, NOTE_C4, NOTE_A2, 
NOTE_A3, NOTE_AS2, NOTE_AS3, 0, 0, 0, NOTE_F2, 
NOTE_F3, NOTE_D2, NOTE_D3, NOTE_DS2, NOTE_DS3, 0, 0, 0, 
NOTE_F2, NOTE_F3, NOTE_D2, NOTE_D3, NOTE_DS2, NOTE_DS3, 0, 0, 
NOTE_DS3, NOTE_D3, NOTE_CS3, NOTE_C3, 0, NOTE_DS3, 0, 
NOTE_D3, 0, NOTE_GS2, 0, NOTE_G2, 0, NOTE_CS3, 0, 
NOTE_C3, NOTE_FS3, NOTE_F3, NOTE_E3, NOTE_AS3, NOTE_A3, 
NOTE_GS3, 0, NOTE_DS3, 0, NOTE_B2, 0, NOTE_AS2, 0, 
NOTE_A2, 0, NOTE_GS2, 0, 0
  };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
 8,8,8,8,8,8,4,4,4,8,8,8,8,8,8,4,4,4,8,8,8,8,8,8,4,4,4,
 8,8,8,8,8,8,4,4,12,12,12,8,8,8,8,8,8,8,8,8,8,8,8,
 12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,1 };

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < notecount; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(notecount);
  }
}


void loop() {
  // no need to repeat the melody.
/*
for (int thisNote = 0; thisNote < notecount; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(notecount);
  }
*/
}

