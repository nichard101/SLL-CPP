// SLL-CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SLL.h"

int main()
{
    SLL sll;
    sll.add("One");
    sll.add("Two");
    sll.add("Three");
    sll.add("Four");
    sll.add("Five");


    sll.print();

    sll.insert("Six", 1);

    sll.print();

    sll.remove(2);

    sll.print();

    sll.remove(4);

    sll.print();

    sll.insert("Zero", 0);

    sll.print();

    sll.insert("Ten", 4);

    sll.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file