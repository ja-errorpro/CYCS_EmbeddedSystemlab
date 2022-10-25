#include <iostream>
#include <wiringPi.h>

using namespace std;
const int RED = 1;
const int BTN = 4;

int main(void){

	if(wiringPiSetup()==-1) return 0;
	
	pinMode(RED,OUTPUT);
	pinMode(BTN,INPUT);
	while(1){
		if(digitalRead(BTN)){
			digitalWrite(RED,1);
			delay(10000);
		}else{
			digitalWrite(RED,0);
		}
	
	}
	return 1;
}
