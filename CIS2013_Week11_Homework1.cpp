#include <iostream>
#include <string>
using namespace std;

class carAtts {
private:
	string make;
	string year;
	string model;
	string color;
	bool carDriving = true;
	bool carOn = false;
	int carGas = 6;
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
		carDriving = true;
		if (carOn == false) {
			cout << "You started your car" << endl;
			carOn = true;
		}
		else if (carOn == true) {
			cout << "Your car is already started" << endl;
		}
	}

	void stopCar() {
		carDriving = false;
		if (carOn == true) {
			cout << "You stopped your car" << endl;
			carOn = false;
		}
		else if (carOn == false) {
			cout << "Your car is already off" << endl;
		}
	}

	void driveCar() {
		int y;
		
			if (carOn == true) {
				while (carDriving == true && carGas > 0) {
					cout << "What do you want to do? " << endl;
					cout << "1 = Drive Forward" << endl << "2 = Turn Right" << endl << "3 = Turn Left" << endl << "4 = Stop driving" << endl;
					cin >> y;
					switch (y) {
					case(1): {
						cout << "You are driving forward.." << endl;
						carGas--;
						break;
					}
					case(2): {
						cout << "You turned right.." << endl;
						carGas--;
						break;
					}
					case(3): {
						cout << "You turned left.." << endl;
						carGas--;
						break;
					}
					case(4): {
						cout << "You stopped driving" << endl;
						carDriving = false;
						break;
					}
					}
					cout << "Fuel " << carGas << "/6" << endl;
					if (carGas <= 2 && carGas != 0) {
						cout << "You are running low on gas, stop and fill your tank!" << endl;
					}
					if (carGas == 0) {
						cout << "You are out of gas, you cant drive any more!" << endl;
						carDriving = false;
					}
					
				}
			}
			
			else if (carOn == false) {
				cout << "You have to start your car before you can drive it" << endl;
		
			}
		
	}

	void fillTank() {
		carDriving = true;
		cout << "You have filled your gas and you are ready to drive" << endl;
		carGas = 6;
	}
	void printCar() {
		cout << "You are driving a " << color << year << make << model << endl;
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
			"5 = Start Car" << endl << "6 = Stop Car" << endl << "7 = Print your car" << endl << "8 = Drive your car" << endl << "9 = Fill Gas Tank" << endl;

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
		case(8): {			
			userCar.driveCar();
			break;
		}
		case(9): {
			userCar.fillTank();
			
			break;
		}
		}
		cout << endl;
	}
	
	return 0;
}
