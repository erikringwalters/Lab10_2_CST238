/*---------------------------------------------------------------------
Driver program to test the Stack class.
----------------------------------------------------------------------*/
//Erik Ring-Walters
//10/27/2016
//CST-238 Lab 10 problem 2
//Binary calculator with stacks
//ID: 002488407
#include <iostream>
using namespace std;

#include "Stack.h"

int main()
{
	Stack bin;
	int userInputtedValue;
	cout << "Please enter a value: ";
	cin >> userInputtedValue;
	cout << "Decimal value: " << userInputtedValue << endl;
	while (userInputtedValue != 0)
	{
		bin.push(userInputtedValue % 2);
		userInputtedValue /= 2;
	}
	cout << "Binary value: ";
		while(!bin.empty())
	{
		cout << bin.top();
		bin.pop();
	}
		cout << "\n";
}