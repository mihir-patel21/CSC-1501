//==========================================================
//
// Title: Base Conversion!
// Course:     CSC 1501
// Lab Number: 7
// Author:     Mihir Patel (gg3103)
// Date:       06/14/2020
// Description:
// Create a program which can take the input of a decimal number and numerical base
// and convert the decimal number to that base
//==========================================================

#include <iostream>  // For cin, cout, and system
#include <cstdio>
using namespace std;  // So "std::cout" may be abbreviated to "cout"

void convert(int number, int base)
{
	if (number == 0)
	
		return;
	

	int x = number % base;
	number /= base;
	if (x < 0)
	
		number += 1;
	
	convert(number, base);
	cout << x << 0 ? x + (base * -1) : x;
	return;
	
}

int main()
{
	int number;
	int base;

	cout << "Enter number in decimal base: " << endl;
	cin >> number;

	cout << "Enter base to convert: " << endl;
	cin >> base;

	if (number != 0)
	{
		convert(number, base);
		cout << endl;
		
	}
	else
	{
		cout << "0" << endl;
	}
	
	return 0;

}