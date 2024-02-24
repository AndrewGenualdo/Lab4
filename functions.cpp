/*
     Author:  Drew Genualdo
      Class:  CSI-240-04
 Assignment: Lab 4
 Created on: February 22, 2024

Description:
   The project is to create a dynamic array of Account and manipulate
   this array. However, the purpose of this file is merely create
   the Account type

Certification of Authenticity:
   I certify that this is entirely my own work, except where I have given
   fully-documented references to the work of others.I understand the
   definition and consequences of plagiarism and acknowledge that the
   assessor of this assignment may, for the purpose of assessing this
   assignment:
   - Reproduce this assignment and provide a copy to another member of
     academic staff; and/or
   - Communicate a copy of this assignment to a plagiarism checking
     service(which may then retain a copy of this assignment on its
	 database for the purpose of future plagiarism checking)
*/
#include "header.h"

/*     Pre: *ptr must be populated (and optionally sorted)
 *    Post: None
 * Purpose: The elements of dynamic *ptr array will be printed to the console
 *************************************************************************************************/
void display(int size, Account *ptr)
{
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }
}

/*     Pre: size must be obtained from the user
 *    Post: The dyanmic *ptr array will be populated with data from the file at the filename path
 * Purpose: To load data into *ptr from a file
 *************************************************************************************************/
void populate(int size, string filename, Account *ptr)
{
    ifstream ifstream(filename);
    int i = 0;
    while (i < size && !ifstream.eof())
    {
        ifstream >> ptr[i];
        i++;
    }
}

/*     Pre: None
 *    Post: Returns int value entered by the user
 * Purpose: To get an int value from the user
 *************************************************************************************************/
int promptSize()
{
    int input = -1;
    while (input < 1 || input > 1000)
    {
        cout << "Please enter an amount between 1-1000: ";
        cin >> input;
    }
    cout << endl; //Without this, the first line has an extra space at the beginning for some reason making it look weird
    return input;
}

/*     Pre: populate must load the dynamic *ptr array
 *    Post: The contents of *ptr will have their order switched to be sorted by ID
 * Purpose: To sort the dynamic *ptr array by ID in ascending order
 *************************************************************************************************/
void sort(int size, Account *ptr)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                Account temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}