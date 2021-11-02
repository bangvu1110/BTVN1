// BTVN4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x; //start time
	int y; //end time
	int a = 30000;
	int b; //fee

	cout << " We open from 8am to 24pm everyday" << endl;
	cout << " Enter the time you start: ";
	cin >> x;
	cout << " Enter the time you finish at";
	cin >> y;

	int z = y - x;

	if (x < 8 && y>24) {
		cout << " Error";
	}
	else if (y <= 17) {
		if (z > 3) {
			b = ((a - a * 30 / 100) * (z - 3) + 3 * a) - (((a - a * 30 / 100) * (z - 3) + 3 * a) * 10 / 100);
			cout << " You have to pay " << b << " dong " << endl;
		}
		else {
			b = (z * a) - (z * a * 10 / 100);
			cout << " You have to paid " << b << " dong " << endl;
		}

	}
	else if (y > 17) {
		if (z > 3) {
			b = (a - a * 30 / 100) * (z - 3) + 3 * a;
			cout << " You have to pay " << b << " dong " << endl;
		}
		else {
			b = (z * a);
			cout << " You have to paid " << b << " dong " << endl;
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
