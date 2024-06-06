#include <iostream>
using namespace std;

int main() {
	int stanjeRacuna = 0;
	int opcija;
	int iznos;

	do {
		cout << "Welcome to your banking application" << endl;
		cout << "Please select one of the options: " << endl;

		cout << "1. Current balance " << endl;
		cout << "2. Withdraw" << endl;
		cout << "3. Deposit" << endl;
		cout << "4. Exit" << endl;
		cin >> opcija;

		switch (opcija)
		{
		case 1:
			cout << "Your current balance is: " << stanjeRacuna << endl;
			break;
		case 2:
			cout << "Enter the amount you want to withdraw: " << endl;
			cin >> iznos;

			if (iznos <= stanjeRacuna) {
				stanjeRacuna -= iznos;
				cout << "You have withdrawn: " << iznos << " rsd " << endl;
				cout << "Remaining balance is: " << stanjeRacuna << " rsd." << endl;
			}
			else {
				cout << "Insufficient funds" << endl;
			}

			break;

		case 3:
			cout << "Enter the amount you want to deposit: " << endl;
			cin >> iznos;
			stanjeRacuna += iznos;
			cout << "You have successfully deposited: " << iznos << " rsd." << endl;
			cout << "Account balance after deposit is: " << stanjeRacuna << endl;
			break;

		case 4:
			cout << "Thank you for using our service" << endl;
			break;
			
		default:
			cout << "Opcija not defined" << endl;			
		}
		cout << endl;
	} while (opcija != 4);


	return 0;
}
