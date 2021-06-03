//==========================================================
//
// Title: Lab 4
// Course:     CSC 1501
// Lab Number: 2
// Author:     Mihir Patel (gg3103)
// Date:       05/23/2020
// Description:
// Create a program which can test the validity of propositonal logic
//
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
#include <string.h>
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int impliesTruth(int a, int b) {
    if ((a == 1 && b == 1) || (a == 0 && b == 1) || (a == 0 && b == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    //Declare varibles
    int r;
    int a;
    int h;
    int e;

    //Run program 16 times
    for (int i = 0; i < 16; i++) {
        cout << "Enter a number for Rocket: ";
        cin >> r;
        cout << "Enter a number for Astronaut: ";
        cin >> a;
        cout << "Enter a number for Highly Trained: ";
        cin >> h;
        cout << "Enter a number for Educated: ";
        cin >> e;
        cout << endl;

        cout << "Rocket implies Astronaut : " << impliesTruth(r, a) << endl;

        cout << "Astronaut implies Highly Skilled: " << impliesTruth(a, h) << endl;

        cout << "Highly Skilled implies Educated: " << impliesTruth(h, e) << endl;

        cout << "Educated impies Rocket: " << impliesTruth(e, r) << endl;

        cout << endl;

        if (impliesTruth(r, a) == 1 && impliesTruth(a, h) == 1 && impliesTruth(h, e) == 1 && impliesTruth(e, r) == 0) {
            cout << "This statement is invalid" << endl;
            cout << endl;
        }
        else {
            cout << "This statement is valid" << endl;
            cout << endl;
        }
    }
}