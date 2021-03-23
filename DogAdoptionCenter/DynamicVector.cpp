// Dynamic Vector implementaion
#include "DynamicVector.h"

template<typename T>
DynamicVector<T>::DynamicVector(int capacity)
{
	this->nrElem = 0;
	this->capacity = capacity;
	this->arr = new T[capacity];
}

template<typename T>
DynamicVector<T>::DynamicVector(const DynamicVector& v)
{
	// Copy constructor - TBI
}

template<typename T>
DynamicVector<T>::~DynamicVector()
{
	delete[] this->arr;
}

template<typename T>
T& DynamicVector<T>::operator[](int pos)
{
	return T[pos];
}