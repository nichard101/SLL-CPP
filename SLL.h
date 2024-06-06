#pragma once
#ifndef SSL_H

#include <iostream>

class SLL
{
public:
	void add(std::string data);
	void insert(std::string data, int index);
	void remove(int index);
	void print();
};

#endif