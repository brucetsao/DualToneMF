int DTMFDevice::goertzel(int freq){
	int freq =  freq/100000;
	int s_prev = 0 ;
	int s_prev2 = 0 ;
	int coeff = 2 * cos(2 * 3.14 * freq) ;
	for(int i = 2; i < 6; i++){
		s = x[i] + coeff *s_prev  - s_prev2 ;
		s_prev2 = s_prev ;
		s_prev = s ;
	}
	return s_prev2 * s_prev2 + s_prev * s_prev - coeff * s_prev * s_prev2 ;
	
}
char DTMFDevice::getTone(){
	if((buff[0]+buff[1]+buff[2]+buff[3]+buff[4]+buff[5])==0){
		
	}
	else{
	}
}
void DTMFDevice::sample(){
	buff[0] = analogRead(ain)-calib;
	buff[1] = analogRead(ain)-calib;
	buff[2] = analogRead(ain)-calib;
	buff[3] = analogRead(ain)-calib;
	buff[4] = analogRead(ain)-calib;
	buff[5] = analogRead(ain)-calib;
}
void calibrate(){
	calib =  analogRead(ain);
}