// Service module
#pragma once
#include "Repository.h"
#include "Dog.h"
#include <string>

class Service {
private:
	Repository<Dog> repo;

public:

	Service();
	~Service();

	void addDogByVars(std::string name, std::string breed, int age, std::string link_photo);
	void removeDogById(int id);
	void updateDogById(int id, std::string name, std::string breed, int age, std::string link_photo);
	Dog* getAllDogs();
	int getNrDogs();
};

Service::Service()
{
}

Service::~Service()
{
}

inline void Service::addDogByVars(std::string name, std::string breed, int age, std::string link_photo)
{
	Dog d(name, breed, age, link_photo);
	this->repo.add(d);
}

inline void Service::removeDogById(int id)
{
}

inline void Service::updateDogById(int id, std::string name, std::string breed, int age, std::string link_photo)
{
}

inline Dog* Service::getAllDogs()
{
	return nullptr;
}

inline int Service::getNrDogs()
{
	return 0;
}

