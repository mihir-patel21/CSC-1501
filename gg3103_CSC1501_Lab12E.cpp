//==========================================================
//
// Title: Lab 3: The Truth Table, But Wrose
// Course:     CSC 1501
// Lab Number: 3
// Author:     Mihir Patel (gg3103)
// Date:       05/16/2020
// Description:
// Create a program that can try out every possible logical combination of the variables A,B, and C
//
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

// Nor Function
bool NOR(bool x, bool y)
{
	return !(x || y);
}
// NAND Function
bool NAND(bool x, bool y)
{
	return !(x && y);
}
// IMPLIES Function
bool IMPLIES(bool x, bool y)
{
	return !(x && !y);
}
// XOR Function
bool XOR(bool x, bool y)
{
	return (x && !y || !x && y);
}
// XNOR Function
bool XNOR(bool x, bool y)
{
	return (x && y || !x && !y);

}

int main()
{
	// Truth Table Arrays
	int a[8] = { 0,0,0,0,1,1,1,1 };
	int b[8] = { 0,0,1,1,0,0,1,1 };
	int c[8] = { 0,1,0,1,0,1,0,1 };
	//Result Array Variable
	int res[8];
	// Application Header
	cout << "Welcome to the Truth Table But Worse!" << endl;
	cout << "-------------------------------------" << endl;

	for (int i = 0; i < 8; i++)
	{
		res[i] = NAND(XOR(a[i],c[i]),||(b[i],a[i]);
		cout << res[i] << " !(A XOR C) NAND (B OR A) " << endl;
		cout << endl;
	}

	for (int i = 0; i < 8; i++)
	{
		res[i] = NAND(IMPLIES(b[i], c[i]), NOR(a[i], b[i]));
		cout << res[i] << " (B implies C) nand (A nor B)" << endl;
		cout << endl;
	}

	for (int i = 0; i < 8; i++)
	{
		res[i] = IMPLIES(XOR(a[i], b[i]), XNOR(b[i], c[i]));
		cout << res[i] << " (A xor B) implies (B xnor C)" << endl;
		cout << endl;
	}

	for (int i = 0; i < 8; i++)
	{
		res[i] = IMPLIES(IMPLIES(a[i], b[i]), !c[i]);
		cout << res[i] << " (A implies B) implies !C" << endl;
		cout << endl;
	}
	// Application Closer
	cout << "-----------------------------------------------" << endl;
	cout << "Thank you for using The Truth Table, But Worse!" << endl;
}