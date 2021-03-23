#pragma once
#include "DynamicVector.h"
#include <iostream>
// Repository module

template<typename T>
class Repository {
private:
	DynamicVector<T> arr;

public:

	// Constructor
	Repository();

	~Repository();

	void add(T elem);
	T removeElem(int pos);
	T updateElem(int pos, T newElem);
	T* getAllElements();
	T getElement(int pos);
	int getNrElements();
};

template<typename T>
Repository<T>::Repository()
{
}

template<typename T>
Repository<T>::~Repository()
{
}

template<typename T>
void Repository<T>::add(T elem)
{
	this->arr.add(elem);
}

template<typename T>
T Repository<T>::removeElem(int pos)
{
	return this->arr.removeElem(pos);
}

template<typename T>
T Repository<T>::updateElem(int pos, T newElem)
{
	return this->arr.updateElem(pos, newElem);
}

template<typename T>
T* Repository<T>::getAllElements()
{
	return this->arr.getAllElements();
}

template<typename T>
T Repository<T>::getElement(int pos)
{
	return this->arr.getElement(pos);
}

template<typename T>
inline int Repository<T>::getNrElements()
{
	return this->arr.getLength();
}

