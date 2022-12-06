# include <iostream>
# include <wiringPi.h>
# include <mcp3004.h>

using namespace std;

#define BASE 200
#define SPI_CHAN 0

const int CHAN = 0;

int main(){
	cout << "Sensing\n";
	if(wiringPiSetup()==-1) return 0;

	mcp3004Setup(BASE,SPI_CHAN);
	while(1){
		int val = analogRead(BASE + CHAN);
		cout << "Analog Value: " << val << '\n';
		delay(500);
	}
	return 1;
}



