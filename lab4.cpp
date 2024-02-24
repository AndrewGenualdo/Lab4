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

using namespace std;

const string FILE_NAME = "data.txt";

int main()
{
    int size = promptSize();
    Account *ptr;
    ptr = new Account[size];
    populate(size, FILE_NAME, ptr);
    sort(size, ptr);
    display(size, ptr);
    delete [] ptr;

    return 0;
}
