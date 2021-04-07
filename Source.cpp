/*
Pierce Rogg
CIS170C
Mar 2021
Course project
*/

// import libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/// Entry point to the application
int main()
{
	// get input
	int choice = 0;

	cout << "Enter your Choice: ";
	cin >> choice;

	if (choice == 5)
	{
		cout << "\nGoodbye!" << endl;
	}
	else
	{
		cout << "\nRun some code..." << endl;
	}
	//pause
	cout << endl;
	system("pause");

	return 0;
}