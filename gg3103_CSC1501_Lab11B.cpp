//==========================================================
//
// Title: Blackjack
// Course:     CSC 1501
// Lab Number: 11
// Author:     Mihir Patel (gg3103)
// Date:       07/14/2020
// Description:
// Create a game of Blackjack
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
    int card, card2, card3, sum, card4;
    cout << "Enter card value (Recived A input either 1 or 11):" << endl;
    cin >> card;
    if (card == 1)
    {
        cout << "Enter the Second Card: " << endl;
        cin >> card2;
        if (card2 == 10)
        {
            cout << "You have hit 21, you win!" << endl;
        }
        else
        {
            cout << "Taking this card will not make you lose! " << endl;
        }


    }
    else
    {
        cout << "Enter the first card value: " << endl;
        cin >> card2;
        cout << "Enter the second card value: " << endl;
        cin >> card3;
        double sum = (double)card2 + card3;
        double prob;
        if (sum <= 11)
        {
            cout << "Taking this card will not make you lose! " << endl;
            cout << "Enter card value (Recived A input either 1 or 11): " << endl;
            cin >> card4;
            sum = sum + card4;
            if (sum < 21)
                cout << "You're still in the game! Haven't hit 21 yet!" << endl;
            else if (sum == 21)
                cout << "Congrates you won!" << endl;
        }
        else
        {
            prob = (21 - sum) / 14;
            if (prob <= 0.3)
            {
                cout << "Terrible idea to pick up another card your probility of hitting 21 is:  ";
                cout << prob << endl;
                cout << "Enter card value (Recived A input either 1 or 11): " << endl;
                cin >> card4;
                sum = sum + card4;
                if (sum < 21)
                    cout << "Still under 21! You're still in the game! " << endl;
                else if (sum == 21)
                    cout << "Congrates you won!" << endl;
                else
                {
                    cout << "Sorry you lost! Over 21! :( ";
                    cout << sum << endl;
                }
            }
            else
            {
                cout << "The chances of you getting a win is: ";
                cout << prob << endl;
                cout << "Enter card value (Recived A input either 1 or 11): " << endl;
                cin >> card4;
                sum = sum + card4;
                if (sum < 21)
                    cout << "Haven't hit 21 yet! Still in the game!" << endl;
                else if (sum == 21)
                    cout << "Congates you won!" << endl;
                else
                {
                    cout << "Sorry you lost! Over 21! :(   ";
                    cout << sum << endl;
                }
            }

        }
    }
}