// BTVN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <string> 

using namespace std;

int main()
{
    std::cout << " input 2 intergers print to console max, min\n";
	int a;
	int b;

	cout << " Enter two number randomly: ";
	cin >> a;
	cin >> b;

	if (a > b) {
		cout << a << " is the max number" << endl;
		cout << b << " is the min number" << endl;
	}
	else if (a < b) {
		cout << b << " is the max number" << endl;
		cout << a << " is the min number" << endl;
	}
	else {
		cout << " Error" << endl;
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
