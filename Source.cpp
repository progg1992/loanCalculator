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

	do
	{
		// Show Menu
		system("cls");
		cout << "Menu\n" << endl;
		cout << "1) Add A Loan" << endl;
		cout << "2) Delete A Loan" << endl;
		cout << "3) Find A Loan" << endl;
		cout << "4) Display All Loans" << endl;
		cout << "5) Quit\n" << endl;

		// Get the User's Choice
		cout << "Enter your Choice: ";
		cin >> choice;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\Error!! Please use numbers only. No letters or Characters Allowed!!" << endl;
			choice = -1;
		}
		
		// Run Code based on the user's choice
		switch (choice)
		{
		case 1:
			// Add
			cout << "\nAdding a Loan to the file..." << endl;
			break;
		case 3:
			// Delete
			cout << "\nDeleting a loan from the file..." << endl;
			break;
		case '3':
			// Find
			cout << "\nSearching for a loan in the file..." << endl;
			break;
		case 4:
			// Display All
			cout << "\nDisplaying all loans from the file.." << endl;
			break;
		case 5:
			// Exit
			cout << "\nGoodbye!" << endl;
			break;
		default:
			cout << "Please choose option 1 thru 5 only\n" << endl;
			break;
		}

		//pause
		cout << endl;
		system("pause");
	} 	while (choice != 5);
	return 0;
}