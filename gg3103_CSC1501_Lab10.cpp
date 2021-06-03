//==========================================================
//
// Title: Brute Force Code Cracker
// Course:     CSC 1501
// Lab Number: 10
// Author:     Mihir Patel (gg3103)
// Date:       07/1/2020
// Description:
// Making a brute force code cracker, taking an input and run through all
// possiable shift-cipher keys for it.
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int main()
{
	string input;
	string s;
	input = "Lo cebo dy nbsxu iyeb Yfkvdsxo";
	
	

	for (int i = 1; i <= 26; i++)
	{
		s = " ";
		cout << i << ": ";
		for (size_t j = 0; j < input.size(); j++)
		{
			int char_to_num;
			if (isupper(input[j]))
			{
				s += char(int(input[j] + i - 65) % 26 + 65);
			}

			else if (islower(input[j]))
			{
				s += char(int(input[j] + i - 97) % 26 + 97);
			}

			else
			{
				s += input[j];
			}
		}

		cout << s << endl;
	}
}
