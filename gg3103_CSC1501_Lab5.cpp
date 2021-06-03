//==========================================================
//
// Title: Operational Counting
// Course:     CSC 1501
// Lab Number: 5
// Author:     Mihir Patel (gg3103)
// Date:       06/1/2020
// Description:
// Using a suming method
//
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int main()
{
	int i = 1;
	int number;
	int sum = 0 ;
	int sum1 = 0;

	cout << "Enter a number to count up to!: " << endl;
	cin >> number;

	for (int i = 1; i <= number; ++i)
	{
		sum += i;
	}

	for (int i = 1; i <= number; ++i)
	{
		sum1 = (number * (number + 1)) / 2;
	}

	cout << "Sum is equal to: " << sum << endl;
	cout << "Sum for equation is equal to: " << sum1 << endl;

}