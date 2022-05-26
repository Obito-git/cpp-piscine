//
// Created by Anton on 25/05/2022.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include <string>
#include <iostream>

class Brain {
public:
	Brain(Brain &other);

	static const int _IDEAS_COUNT = 100;
	std::string ideas[_IDEAS_COUNT];
	Brain &operator=(const Brain &other);
	Brain();
	virtual ~Brain();
};


#endif //EX01_BRAIN_HPP