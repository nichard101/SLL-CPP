#include "SLL_Node.h"
#include <iostream>

std::string data;
SLL_Node* next;

SLL_Node::SLL_Node() {
    this->data = "";
    this->next = NULL;
}

SLL_Node::SLL_Node(std::string data) {
    this->data = data;
    this->next = NULL;
}