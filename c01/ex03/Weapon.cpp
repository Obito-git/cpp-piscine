#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {}
Weapon::Weapon() {
	this->_type = "fists";
}

const std::string &Weapon::getType() const {
	return _type;
}

void Weapon::setType(const std::string &type) {
	this->_type = type;
}


