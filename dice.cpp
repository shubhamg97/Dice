#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() {
	cout << "\nWELCOME TO THIS DICE APPLET\n-------------------------------------\n";
	cout <<	"TO ROLL THE DIE, PRESS ENTER. TO QUIT, PRESS ANY OTHER BUTTON\n";
	
	while(1) {
		cout << "\nPRESS ENTER TO ROLL THE DIE\n";

		if (cin.get() == '\n') {
			sleep(2);

			srand(time(0));
			int randomnumber = rand() % 6;

			cout << randomnumber + 1 << endl;
		}

		else {
			break;
		}
	}	
	return 0;
}