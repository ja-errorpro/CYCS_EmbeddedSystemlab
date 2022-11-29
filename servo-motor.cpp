# include <iostream>
# include <wiringPi.h>
# include <softPwm.h>
using namespace std;
const int motor = 1;
int main(){
        if(wiringPiSetup() == -1) return 0;
        pinMode(motor,OUTPUT);
	while(1){
		softPwmCreate(motor,0,100);
		softPwmWrite(motor,10);
		delay(1000);
		softPwmCreate(motor,0,100);
		softPwmWrite(motor,20);
		delay(1000);
		softPwmCreate(motor,0,100);
                softPwmWrite(motor,30);
                delay(1000);
	}
	return 1;
}
