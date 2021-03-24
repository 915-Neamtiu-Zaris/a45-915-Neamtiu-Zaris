#pragma once
// Console module

#include "Service.h"
#include <iostream>

class Console {
private:
	Service s;

public:

	Console();
	~Console();

	void printInitialPrompt();
	void printAdminMenu();
	void printUserMenu();
	void runConsole();
};

Console::Console()
{
}

Console::~Console()
{
}

void Console::printInitialPrompt()
{
	std::cout << "Select the mode you would like to use the application in:"
		"\na - Administrator mode.\nu - User mode.\n";
}

void Console::printAdminMenu()
{
	std::cout << "\n1 - Add a dog.\n2 - Remove a dog.\n3 - Update a dog.\n4 - Print all dogs.\n5 - Exit.\n";
}

void Console::printUserMenu()
{
}

inline void Console::runConsole()
{
	this->s.add10Dogs();
	char initialCommand;
	this->printInitialPrompt();
	
	std::cin >> initialCommand;

	if (initialCommand == 'a')
	{
		while (true)
		{
			this->printAdminMenu();

			int command;
			std::cin >> command;

			if (command == 1)
			{
				std::string name;
				std::string breed;
				int age;
				std::string photo_link;

				std::cout << "Name: ";
				std::cin >> name;
				std::cout << "Breed: ";
				std::cin >> breed;
				std::cout << "Age: ";
				std::cin >> age;
				std::cout << "Photo link: ";
				std::cin >> photo_link;

				this->s.addDogByVars(name, breed, age, photo_link);
			}
			else if (command == 2)
			{
				int id;
				std::cout << "The id of the dog to be removed: ";
				std::cin >> id;
				try
				{
					this->s.removeDogById(id);
				}
				catch(int ex)
				{
					if (ex == 21)
						std::cout << "The dog you are trying to remove does not exist.\n";
				}
			}
			else if (command == 3)
			{
				int id;
				std::string name;
				std::string breed;
				int age;
				std::string photo_link;

				std::cout << "The id of the dog you want to update: ";
				std::cin >> id;
				std::cout << "Name: ";
				std::cin >> name;
				std::cout << "Breed: ";
				std::cin >> breed;
				std::cout << "Age: ";
				std::cin >> age;
				std::cout << "Photo link: ";
				std::cin >> photo_link;

				try
				{
					this->s.updateDogById(id, name, breed, age, photo_link);
				}
				catch (int ex)
				{
					if (ex == 21)
						std::cout << "The dog you are trying to update does not exist.\n";
				}
			}
			else if (command == 4)
			{
				Dog* dogs = this->s.getAllDogs();
				int nrDogs = this->s.getNrDogs();

				for (int i = 0; i < nrDogs; ++i)
					std::cout << dogs[i].ToString();
			}
			else if (command == 5)
				return;
		}
	}
	else if (initialCommand == 'u')
	{

	}
}
