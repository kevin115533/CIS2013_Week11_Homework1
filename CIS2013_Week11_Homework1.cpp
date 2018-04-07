#include <iostream>
#include <cstring>
using namespace std;

class car {
public:
	char make[20];
	char year[4];
	char model[20];
	char color[20];
	
	void selectAtt(char x){
		if (x == 'y') {
			cout << "What year is your car? ";
			cin.getline(year,4);
		}
		else if (x == 'm') {
			cin.getline(make, 20);
		}
		else if (x == 'o') {
			cin.getline(model, 20);
		}
		else if(x == 'c') {
			cin.getline(make, 20);
		}
	}


};

int main() {
	char stay;
	char option;

	car userCar;
	cout << "What would you like to do?" << endl;
	cout << "Choose Year (y)" << endl << "Choose Make (m)" << endl << "Choose Model (o)" << endl << "Choose Color (c)" << endl <<
		"Start Car (s)" << endl << "Stop Car (t)" << endl << "Print your car (p)" << endl;

	cin >> option;

	userCar.selectAtt(option);

	cin >> stay;
	return 0;
}
