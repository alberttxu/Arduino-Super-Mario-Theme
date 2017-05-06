/*
  Melody
 
 Plays a melody
 
 circuit:
 * 8-ohm speaker on digital pin 8
 
 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone
 
 */
 #include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, 0, NOTE_C4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_E4, NOTE_C4, 
  NOTE_G3, 0, NOTE_GS3, NOTE_A3, NOTE_F4, NOTE_F4, NOTE_A3, NOTE_B3, NOTE_A4, 
  NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_E4, 
  NOTE_C4, NOTE_G3, 0, NOTE_GS3, NOTE_A3, NOTE_F4, NOTE_F4, NOTE_A3, NOTE_B3, 
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_G3, NOTE_G3, 
  NOTE_C3, NOTE_C4, NOTE_G3, NOTE_E3, NOTE_A3, NOTE_B3, NOTE_A3, NOTE_GS3, NOTE_AS3, NOTE_GS3, NOTE_G3};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  16,8,16,16,16,8,4,4,16,8,16,8,8,16,8,16,4,12,12,12,12,12,12,16,8,16,4,16,8,16,8,8,16,8,
16,4,16,8,16,12,12,12,16,8,16,4,6,6,8,12,12,12,12,12,12,1};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 56; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 2000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(56);
  }
}

void loop() {
  // no need to repeat the melody.
}
