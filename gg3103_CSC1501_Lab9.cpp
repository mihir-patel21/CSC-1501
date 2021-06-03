//==========================================================
//
// Title: Hamming Receiver
// Course:     CSC 1501
// Lab Number: 9
// Author:     Mihir Patel (gg3103)
// Date:       06/24/2020
// Description:
// Program when given a 7 - bit long input
// written in Hamming Code can do the following
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int main()
{
	int b1;
	int b2;
	int b3;
	int b4;
	int b5;
	int b6;
	int b7;
	string s;

	cout << "Enter received message bits: " << endl;
	cin >> s;
	b1 = int(s[0]) - 48;
	b2 = int(s[1]) - 48;
	b3 = int(s[2]) - 48;
	b4 = int(s[3]) - 48;
	b5 = int(s[4]) - 48;
	b6 = int(s[5]) - 48;
	b7 = int(s[6]) - 48;
	int p1 = (b1 + b3 + b5 + b7) % 2;
	int p2 = (b2 + b3 + b6 + b7) % 2;
	int p4 = (b4 + b5 + b6 + b7) % 2;
	int error = p1 + (p2 * 2) + (p4 * 4);
	if (error == 0)
	{
		cout << "There is no incorrect bit!" << endl;
	}
	else
	{
		cout << p4 << p2 << p1 << " is the location of the error" << endl;
		if (s[error - 1] == '0')
		{
			s[error - 1] = '1';
		}
		else
		{
			s[error - 1] = '0';
		}

		cout << "Correct code is: " << s << endl;
	}

	int d1 = int(s[2]) - 48;
	int d2 = int(s[4]) - 48;
	int d3 = int(s[5]) - 48;
	int d4 = int(s[6]) - 48;

	int dec = d4 + (d3 * 2) + (d2 * 4) + (d1 * 8);
	cout << "Decimal form of the message is: " << dec << endl;
	return 0;
}