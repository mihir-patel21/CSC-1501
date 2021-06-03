//==========================================================
//
// Title: Lab 2: The Truth Table
// Course:     CSC 1501
// Lab Number: 2
// Author:     Mihir Patel (gg3103)
// Date:       05/11/2020
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

int main()
{
    int i = 0;
    int counter = 0;
    int a[8] = {0,0,0,0,1,1,1,1};
    int b[8] = {0,0,1,1,0,0,1,1};
    int c[8] = {0,1,0,1,0,1,0,1};
    cout << "Welcome to the Truth Table!" << endl;
    cout << "---------------------------" << endl;
while(i<8)
{
if((a[i] && b[i])||(a[i] && c[i]))
{
cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i] << " Result: 1 for (A and B) or (A and C) " << endl;
counter++;
}

else

cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i] << " Result: 0 for (A and B) or (A and C) " << endl; 
  
i++;
}
i=0;
counter=0;
while(i<8)
{
if((a[i] && c[i]) && (b[i] && (!(c[i]))))
{
cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i]<< " Result: 1 for (A and C) and (B and !C) " << endl;
counter++;
}

else

cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i]<< " Result: 0 for (A and C) and (B and !C) " << endl;
i++;
}

i=0;
counter=0;
while(i<8)
{
if((a[i] || b[i]) && !((b[i] || c[i])))
{
cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i]<< " Result: 1 for (A or B) and !(B or C) " << endl;
counter++;
}

else

cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i]<< " Result: 0 for (A or B) and !(B or C) " << endl;
i++;
}

i=0;
counter=0;
while(i<8)
{
if((a[i] || (b[i] && c[i])) && ((!c[i]) && !(b[i])))
{
cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i]<< " Result: 1 for (A or (B and C)) and (!A and !B) " << endl;
counter++;
}

else

  cout<<"A = "<<a[i]<<" B = "<<b[i]<< " C = "<<c[i]<< " Result: 0 for (A or (B and C)) and (!A and !B) " << endl;
i++;
}
i=0;
counter=0;
while(i<8)
{
if(((b[i] && c[i]) || (c[i] && a[i])) && (!(a[i] || b[i]) && c[i]) )
{
cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i] << " Result: 1 for ((B and C) or (C and A)) and (!(A or B) and C) " << endl;
counter++;
}

else

cout<<"A = "<<a[i]<<" B = "<<b[i]<<" C = "<<c[i] << " Result: 0 for ((B and C) or (C and A)) and (!(A or B) and C) " << endl;
i++;
}

cout << "------------------------------------" << endl;
cout << "Thank you for using the Truth Table!" << endl;
return 0;
}