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

#include "account.h"

using namespace std;

#ifndef LAB4_HEADER_H
#define LAB4_HEADER_H

void display(int size, Account *ptr);
void populate(int size, string filename, Account *ptr);
int promptSize();
void sort(int size, Account *ptr);


#endif //LAB4_HEADER_H
