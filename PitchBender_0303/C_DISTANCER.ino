
void DISTANCER(){
	
  digitalWrite(trigPin, LOW);
	delayMicroseconds(2); 
	digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10); 
	digitalWrite(trigPin, LOW); 
	duration = pulseIn(echoPin, HIGH);
	distance = duration * 0.034 / 2; 

//	if(prevDistance != distance){
//		prevDistance=distance;
//	}	
}
