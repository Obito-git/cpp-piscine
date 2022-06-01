//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	//constructor/destructor
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	//methods
	virtual void makeSound() const;
	virtual void print_idea(int ind);
	virtual void set_animal_idea(int ind, const std::string &idea);
	const std::string &getType() const;

	//overloading
	Animal& operator=(const Animal& other);
};


#endif //EX00_ANIMAL_HPP
