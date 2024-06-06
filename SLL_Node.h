#pragma once
#ifndef SLL_Node_H

#include <iostream>

class SLL_Node
{
public:
	std::string data;
	SLL_Node* next;

	SLL_Node();
	SLL_Node(std::string data);
};

#endif