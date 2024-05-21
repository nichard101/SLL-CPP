// SLL-CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class SLLNode {
public:
    std::string data;
    SLLNode* next;

    SLLNode() {
        this->data = "";
        this->next = NULL;
    }

    SLLNode(std::string data) {
        this->data = data;
        this->next = NULL;
    }
};

SLLNode* head = NULL;
int size = 0;

void remove(int index) {
    if (head == NULL || index < 0 || index >= size) {
        return;
    }

    if (index == 0) {
        head = head->next;
    }
    else {
        int i = 1;
        SLLNode* temp = head;
        while (i < index) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

}

void add(std::string data) {
    SLLNode* newNode = new SLLNode(data);

    if (head == NULL) {
        head = newNode;
        size = 1;
    }
    else {
        SLLNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        size += 1;
    }
}

void insert(std::string data, int index) {
    if (index < 0 || index >= size) {
        return;
    }

    SLLNode* newNode = new SLLNode(data);
    if (head == NULL) {
        head = newNode;
        size = 1;
    }
    else {
        int i = 1;
        SLLNode* temp = head;
        while (i < index) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void print() {
    SLLNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << "**********" << std::endl;
}

int main()
{
    add("One");
    add("Two");
    add("Three");
    add("Four");
    add("Five");

    insert("Six", 1);

    print();

    remove(1);
    print();

    remove(0);
    print();

    remove(7);
    print();
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