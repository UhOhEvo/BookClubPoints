// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	double booksPurchased;

	// Inform user what program does
	cout << "This program will calculate points based on customer book purchases each month.\n" << endl;

	// Prompt user to enter data needed by the program
	cout << "How many books did you purchase this month?\n";
	cin >> booksPurchased;

	// A software algorithm would typically be executed after all data has been input
	if (booksPurchased == 0)
	{
		cout << "You have earned 0 points for your purchase/purchases.\n";
	}
	else if (booksPurchased == 1)
	{
		cout << "You have earned 5 points for your purchase/purchases.\n";
	}
	else if (booksPurchased == 2)
	{
		cout << "You have earned 15 points for your purchase/purchases.\n";
	}
	else if (booksPurchased == 3)
	{
		cout << "You have earned 30 points for your purchase/purchases.\n";
	}
	else if (booksPurchased == 4)
	{
		cout << "You have earned 60 points for your purchase/purchases.\n";
	}
	else if (booksPurchased >= 5)
	{
		cout << "You have earned 60 points for your purchase/purchases.\n";
	}
	else
	{
		cout << "Please enter a valid, non-negative number.\n";
	}

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF 1:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
0
You have earned 0 points for your purchase/purchases.
Press any key to continue . . .

PROOF 2:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
1
You have earned 5 points for your purchase/purchases.
Press any key to continue . . .

PROOF 3:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
2
You have earned 15 points for your purchase/purchases.
Press any key to continue . . .

PROOF 4:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
3
You have earned 30 points for your purchase/purchases.
Press any key to continue . . .

PROOF 5:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
4
You have earned 60 points for your purchase/purchases.
Press any key to continue . . .

PROOF 6:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
5
You have earned 60 points for your purchase/purchases.
Press any key to continue . . .

PROOF 7:
This program will calculate points based on customer book purchases each month.

How many books did you purchase this month?
-1
Please enter a valid, non-negative number.
Press any key to continue . . .

*/