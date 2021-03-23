// Dog module
#include <string>

class Dog
{
private:
	static int current_id;
	int id;
	std::string name;
	std::string breed;
	int age;
	std::string photo_link;

public:

	// Default constructor of a dog.
	Dog();

	// Constructor of a dog.
	Dog(std::string name, std::string breed, int age, std::string photo_link);

	// Destructor of a dog.
	~Dog();

	// ToString method.
	std::string ToString() const;
};