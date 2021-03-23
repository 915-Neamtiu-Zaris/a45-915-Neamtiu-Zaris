#include "Dog.h"
#include <sstream>
#include <iostream>

Dog::Dog(std::string name, std::string breed, int age, std::string photo_link)
{
	this->name = name;
	this->breed = breed;
	this->age = age;
	this->photo_link = photo_link;
}

Dog::~Dog()
{
}

std::string Dog::ToString() const
{
	std::stringstream buffer;
	buffer << "Name: " << this->name << "; Breed: " << this->breed << "; Age: " << this->age << "; Photo: " << this->photo_link << "\n";
	return buffer.str();
}