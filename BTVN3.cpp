// BTVN3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int x;
	cout << " Enter a number which is grater than 9" << endl;
	cin >> x;
	if (x < 10) {
		cout << " Error";
	}
	else if (x > 99) {
		cout << " Error";
	}
	else if (x >= 10) {
		switch (x / 10) {
		case 1: cout << "Muoi"; break;
		case 2: cout << "Hai muoi"; break;
		case 3: cout << "Ba muoi"; break;
		case 4: cout << "Bon muoi"; break;
		case 5: cout << "Nam muoi"; break;
		case 6: cout << "Sau muoi"; break;
		case 7: cout << "Bay muoi"; break;
		case 8: cout << "Tam muoi"; break;
		case 9: cout << "Chin muoi"; break;
		}
		switch (x % 10) {
		case 1: cout << " mot"; break;
		case 2: cout << " hai"; break;
		case 3: cout << " ba"; break;
		case 4: cout << " bon"; break;
		case 5: cout << " nam"; break;
		case 6: cout << " sau"; break;
		case 7: cout << " bay"; break;
		case 8: cout << " tam"; break;
		case 9: cout << " chin"; break;
		}

	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
