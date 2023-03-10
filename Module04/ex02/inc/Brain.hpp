#pragma once

#include <iostream>

//#define DEBUG
//#define DEFAULT_TYPE "*default type*"

class Brain
{
	public:
	std::string ideas[100];
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain *other);
};
