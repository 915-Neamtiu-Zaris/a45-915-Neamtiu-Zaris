// DynamicVector module

#pragma once

template<typename T>
class DynamicVector {
private:
	T* arr;
	int nrElem;
	int capacity;

public:
	// Cosntructor of DynamicVector
	DynamicVector(int capacity = 10);

	// Copy constructor of DynamicVector
	DynamicVector(const DynamicVector& v);

	// Destructor
	~DynamicVector();

	/*
		Overloading the subscript operator
		Input: pos - a valid position within the vector.
		Output: a reference to the element o position pos.
	*/
	T& operator[](int pos);
};