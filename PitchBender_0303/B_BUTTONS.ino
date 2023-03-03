
void BUTTONS(){
for (int i = 0; i < N_BUTTONS; i++) {
  buttonCState[i] =  digitalRead 
		(BUTTON_PIN[i]);  
  if ((millis() - lastDebounceTime[i]) > debounceDelay) {
   if (buttonPState[i] != buttonCState[i]) {
    lastDebounceTime[i] = millis();
   if (buttonCState[i] == LOW) {
    noteOut = Notes[i][NOTE_INDEX];
    tone(auxPin, noteOut);
		    Serial.print("STRING =");		
		    Serial.print(i+1)	;				
		    Serial.print( "  /  FRET =");
		    Serial.println(NOTE_INDEX);
    } else {
		noTone(auxPin);
     } buttonPState[i] = buttonCState[i];
     }
    }
  }
}

