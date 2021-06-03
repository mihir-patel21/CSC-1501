//==========================================================
//
// Title: The Bubble Sort
// Course:     CSC 1501
// Lab Number: 6
// Author:     Mihir Patel (gg3103)
// Date:       06/9/2020
// Description:
// Create a Bubble Sort algorithm
//
//==========================================================

#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout"

int sort(int *arr, int size);
void displayArr(int arr[],int size);

int sort(int *arr, int size)
{
    int action = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 1; j < (size - i); j++)
        {
            action += 1;
            if(arr[j-1] > arr[j])
            {
                action += 3;
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return action;
}

void displayArr(int arr[], int size)
{
    cout << "(" << arr[0];
    for(int i = 1; i < size; i++)
    {
        cout << "," << arr[i];
    }
    cout << ")";
}

int main()
{
    int arr1[] = {1,3,7,5,2,4,6,8,9,10};
    int arr2[] = {10,9,8,7,6,5,4,3,2,1};
    int arr3[] = {1,10,2,9,3,8,4,7,5,6};
    int size = 0;
    int actions = 0;

    size = sizeof(arr1) / sizeof(int);
    cout << "Array 1: ";
    displayArr(arr1,size);
    cout << endl;

    actions = sort(arr1,size);
    displayArr(arr1,size);
    cout << endl;
    cout << "" << actions << " Actions Performed." << endl;

    size = sizeof(arr2) / sizeof(int);
    cout << "Array 2: ";
    displayArr(arr2,size);
    cout << endl;

    actions = sort(arr2,size);
    displayArr(arr2, size);
    cout << endl;
    cout << "" << actions << " Actions Performed." << endl;

    size = sizeof(arr3) / sizeof(int);
    cout << "Array 3: ";
    displayArr(arr3,size);
    cout << endl;

    actions = sort(arr3,size);
    displayArr(arr3,size);
    cout << endl;
    cout << "" << actions << " Actions Performed." << endl;

    return 0;
}