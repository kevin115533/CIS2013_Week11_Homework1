#include <iostream>
#include <string>
using namespace std;

class carAtts {
private:
	string make;
	string year;
	string model;
	string color;
	bool carOn = false;
public:
	void setMake(string x) {
		make = x;
	}

	void setYear(string x) {
		year = x;
	}
	void setModel(string x) {
		model = x;
	}

	void setColor(string x) {
		color = x;
	}

	void startCar() {
		if (carOn == false) {
			cout << "You started your car" << endl;
			carOn = true;
		}
		else if (carOn == true) {
			cout << "Your car is already started" << endl;
		}
	}

	void stopCar() {
		if (carOn == true) {
			cout << "You stopped your car" << endl;
			carOn = false;
		}
		else if (carOn == false) {
			cout << "Your car is already off" << endl;
		}
	}

	void printCar() {
		cout << year << make << model << endl;
	}
};



int main() {
	bool keepGoing = true;
	int option;
	string uMake, uYear, uColor, uModel;

	carAtts userCar;
	

	while (keepGoing == true) {

		cout << "What would you like to do?" << endl;
		cout << "1 = Choose Year" << endl << "2 = Choose Make" << endl << "3 = Choose Model" << endl << "4 = Choose Color" << endl <<
			"5 = Start Car" << endl << "6 = Stop Car" << endl << "7 = Print your car" << endl;

		cin >> option;


		switch (option) {
		case(1): {
			cout << "Choose the year of your car: ";
			cin.ignore();
			getline(cin, uYear);
			userCar.setYear(uYear);
			break; }
		case(2): {
			cout << "Choose the make of your car: ";
			cin.ignore();
			getline(cin, uMake);
			userCar.setMake(uMake);
			break;
		}
		case(3): {
			cout << "Choose the model of your car: ";
				cin.ignore();
			getline(cin, uModel);
			userCar.setModel(uModel);
			break;
		}
		case(4): {
			cout << "Choose the color of your car: ";
			cin.ignore();
			getline(cin, uColor);
			userCar.setColor(uColor);
			break;
		}
		case(5): {
			userCar.startCar();
			break;
		}
		case(6): {
			userCar.stopCar();
			break;
		}
		case(7): {
			userCar.printCar();
			break;
		}
		}
		cout << endl;
	}
	
	return 0;
}
