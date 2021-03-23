// Dog module
#include <string>

class Dog
{
private:
	std::string name;
	std::string breed;
	int age;
	std::string photo_link;

public:

	// Constructor of a dog.
	Dog(std::string name, std::string breed, int age, std::string photo_link);

	// Destructor of a dog.
	~Dog();

	// ToString method.
	std::string ToString() const;
};