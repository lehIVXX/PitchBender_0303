void POTS(){
  potVal = analogRead(POT_PIN);
  potVal = map(potVal, potMin, potMax, 0, 21);   	 
  potVal = constrain(potVal, 0, 21);
	potVal = clipValue(potVal,0,21);
	
if ((millis() - PTime) > 200) {		
if (prevVal != potVal) {
   PTime = millis();
	 NOTE_INDEX=potVal;	     			    
   prevVal = potVal;  				
}
//	delay(1);
 }}
