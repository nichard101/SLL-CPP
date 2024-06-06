#include "SLL.h"
#include "SLL_Node.h"


SLL_Node* head = NULL;
int size = 0;

void SLL::add(std::string data) {
    SLL_Node* newNode = new SLL_Node(data);

    if (head == NULL) {
        head = newNode;
        size = 1;
    }
    else {
        SLL_Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        size += 1;
    }
}

void SLL::insert(std::string data, int index) {
    if (index < 0 || index >= size) {
        return;
    }

    SLL_Node* newNode = new SLL_Node(data);
    if (head == NULL) {
        head = newNode;
        size = 1;
    }
    else {
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        }
        else {
            int i = 1;
            SLL_Node* temp = head;
            while (i < index) {
                temp = temp->next;
                i++;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        size++;
    }
}

void SLL::remove(int index) {
    if (head == NULL || index < 0 || index >= size) {
        return;
    }

    if (index == 0) {
        head = head->next;
    }
    else {
        int i = 0;
        SLL_Node* temp = head;
        while (i < index - 1) {
            //std::cout << "TEST " << temp->data << std::endl;
            temp = temp->next;
            i++;
        }
        temp->next = temp->next->next;
        size--;
    }
}

void SLL::print() {
    std::cout << "LIST SIZE: " << size << std::endl;
    SLL_Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << "**********" << std::endl;
}