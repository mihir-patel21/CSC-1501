//==========================================================
//
// Title: Set Operations
// Course:     CSC 1501
// Lab Number: 8
// Author:     Mihir Patel (gg3103)
// Date:       06/16/2020
// Description:
// Create a program which can perform the set operations of union, interset
// inverse, subtraction, and magnitude.
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
#include <algorithm> // For collection of functions
#include <vector>
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 0,2,0,4,0,6,0,8,0,10 };
	int c[10] = { 1,0,3,0,5,0,7,0,9,0 };
	int d[10] = { 1,2,3,0,5,0,7,0,0,0 };
	int e[10];
	int f[10];

	// Problem 1: A intersect D
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (a[i] == d[j])
			{
				int temp = a[i];
				a[i] = e[j];
				e[j] = temp;
			}
		}
	}

	cout << "The intersection of A and D is: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << e[i] << " " << endl;
	}

	// Problem 6: D intersect C
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (d[i] == c[i])
			{
				int temp6 = d[i];
				d[i] = f[i];
				f[i] = temp6;
				
			}
		}
	}

	cout << "The intersection of D and C is: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << f[i] << " " << endl;
	}
	
}