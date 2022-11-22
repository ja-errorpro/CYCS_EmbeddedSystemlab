# include <iostream>
# include <wiringPi.h>
# include <softPwm.h>
using namespace std;
const int L = 1;
int main(){
	if(wiringPiSetup() == -1) return 0;
	softPwmCreate(led,0,100);
	while(1){
		int v;
		for( v=0;v<=100;++v){
			softPwmWrite(L,v);
			delay(20);
		}
		for( v=100;v>=0;--v){
			softPwmWrite(L,v);
			delay(20);
		}
	}

	return 1;
}
