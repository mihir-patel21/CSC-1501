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
    int card;
    int card2;
    int card3;
    int sum;

    cout << "Enter card value (Recived A input either 1 or 11): " << endl;
    cin >> card;
    if(card  == 1)
    {
        cout << "Enter the second card value: " << endl;
        cin >> card2;
        if(card2 == 10)
        {
            cout << "You have hit 21, you win!" << endl;
        }
        else
        {
            cout << "Taking this card you will not make you lose" << endl;
        }
        
    }
    else
    {
        cout << "Enter the first card value: " << endl;
        cin >> card;
        cout << "Enter the second card value: " << endl;
        cin >> card2;
        double sum = (double) card + card2;
        double prob;
        if(sum <= 11)
        {
            cout << "Taking this card you will not make you lose" << endl;
            cout << "Enter the value of the third card (Recieved A input either 1 or 11): " << endl;
            cin >> card3;
            sum = sum + card3;
            if(sum < 21)
            {
                cout << "Still haven't hit 21, you're in the game! " << endl;
            }
            else if(sum == 21)
            {
                cout << "Congrates you won! " << endl;
            }
        }
        
        
    else
    {
        int prob;
        prob = (21 - sum)/14;
        if(prob <= 0.3)
        {
            cout << "It is a bad take an extra card! " << endl;
            cout << prob << endl;
            cout << "Enter the value of the third card (Recieved A input either 1 or 11): " << endl;
            cin >> card3;
            sum = sum + card3;
            if(sum < 21)
            {
                cout << "Stil haven't hit 21, you're in the game! " << endl;
            }
            else if(sum == 21)
            {
                cout << "You lose, you're over 21! " << endl;
                cout << sum << endl;
            }
        }
         else
    {
        cout << "The chances of you getting a win is: " << endl;
        cout << prob << endl;
        cout << "Enter the value of the third card (Recieved A input either 1 or 11): " << endl;
        cin >> card3;
        sum = sum + card3;
        if(sum < 21)
        {
            cout << "Stil haven't hit 21, you're in the game! " << endl;
        }
        else if(sum == 21)
        {
            cout << "Congrates you won! " << endl;
        }
        else
        {
            cout << "You lose, you're over 21!" << endl;
        }
        
    }
        
    }
    
    
}
