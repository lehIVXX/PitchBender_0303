void loop() {
	
	POTS();
	
	BUTTONS();
	
	DISTANCER();
	
   if ( (millis()-Timer)>500 ) {
		   // Serial.println();			  
	      Serial.print("DISTANCE =");
		    Serial.print(distance);		
		    Serial.print( "  /  FRET =");
		    Serial.println(NOTE_INDEX);
		  //  Serial.println();						
        Timer = millis();
       // loopCount = 0;*/
    }
  }
	