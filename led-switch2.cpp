#include <iostream>
#include <wiringPi.h>

using namespace std;
const int RED = 1;
const int GRN = 5;
const int BTN = 4;

int main(void){

	if(wiringPiSetup()==-1) return 0;
	
	pinMode(RED,OUTPUT);
	pinMode(GRN,OUTPUT);
	pinMode(BTN,INPUT);
	int i = 0;
	// when i==0, all led turn down
	// when i==1, red led turn up
	// when i==2, green led turn up, red led turn down
	// when i==3, all led turn up
	while(1){
		if(digitalRead(BTN)){
			i = (i + 1)%3; 
			
			delay(200);
		}
		switch(i){
			case 0:
				digitalWrite(RED,0);
				digitalWrite(GRN,0);
				break;
			case 1:
				digitalWrite(RED,1);
				digitalWrite(GRN,0);
				break;
			case 2:
				digitalWrite(RED,0);
				digitalWrite(GRN,1);
				break;
			
			default:
				cerr << "Error\n";
				return 1;
		}
	
	}
	return 1;
}
