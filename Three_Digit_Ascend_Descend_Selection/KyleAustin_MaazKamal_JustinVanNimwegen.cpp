/*
Edited by Angela Liu
Maaz Kamal, Kyle Austin, Justin Van Nimwegen, Yezen Higazin - 4

Assignment Name : Three_Digit_Ascend_Descend_Selection

Taking in data and tranfering into 'if' statements

*/

//Libraries
#include <iostream> 
#include <conio.h>

//namespaces
using namespace std;

//functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}

void main() {
	for (int i = 0; i < 30; i++) {
		int x;
		cout << i << endl;
		cout << "Choose a 3 Digit #" << endl;
		cin >> x;
		cout << "You Chose " << x << endl;

		int A = x / 100;
		int B = x % 100 / 10;
		int C = x % 10;

		if ((A > B) && (B > C)) {

			cout << x << " is Descending" << endl;

		}
		else if ((A < B) && (B < C)) {
			cout << x << " is Ascending" << endl;
		}
		else {
			cout << "Neither" << endl;
		}
		}
		pause();
	}
