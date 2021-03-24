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
	void add10Dogs();
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
	if(this->repo.existsElem(id))
		this->repo.removeById(id);
	else
	{
		throw 21;
	}
}

inline void Service::updateDogById(int id, std::string name, std::string breed, int age, std::string link_photo)
{
	if (this->repo.existsElem(id))
	{
		Dog dUpdate(name, breed, age, link_photo);
		this->repo.updateElem(id, dUpdate);
	}
	else
		throw 21;
}

inline Dog* Service::getAllDogs()
{
	return this->repo.getAllElements();
}

inline int Service::getNrDogs()
{
	return this->repo.getNrElements();
}

inline void Service::add10Dogs()
{
	Dog d1("Bobita", "Yorkshire Terrier", 11, "asd");
	Dog d2("Rex", "German Shepherd", 2, "asd");
	Dog d3("Thor", "Bulldog", 6, "asd");
	Dog d4("Avalach", "Siberian Husky", 1, "asd");
	Dog d5("Astral", "Siberian Husky", 8, "asd");
	Dog d6("Pumba", "Chihuahua", 1, "asd");
	Dog d7("Bono", "Doberman", 9, "asd");
	Dog d8("Cora", "Bichon", 4, "asd");
	Dog d9("Bobo", "Dalmatian", 6, "asd");
	Dog d10("Terry", "Rottweiler", 1, "asd");

	this->repo.add(d1);
	this->repo.add(d2);
	this->repo.add(d3);
	this->repo.add(d4);
	this->repo.add(d5);
	this->repo.add(d6);
	this->repo.add(d7);
	this->repo.add(d8);
	this->repo.add(d9);
	this->repo.add(d10);
}

