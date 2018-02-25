//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d15
// File description:
//
//

#ifndef CPP_D15_EX05_HPP
#define CPP_D15_EX05_HPP

#include <cstdio>
#include <iostream>
#include <exception>

template <typename T>
class array
{

private:
    unsigned int _size;
    T *_tab;

public:
    array(unsigned int n=0);

    array(array &arr);
    array<T> &operator=(array<T> &src);
    T &operator[](unsigned int place);
    T &operator[](unsigned int place)const;

    void dump()const;
    unsigned int size()const;

    template <typename U>
    array<U> &convertTo(U (*fun)(const T &)) const;

};

template<typename T>
array<T>::array(unsigned int n)
{
	_size = n;
	_tab = new T[n];
	for (unsigned int i = 0; i < _size ; ++i) {
		_tab[i] = 0;
	}
	//_tab[_size] = NULL;
}

template<typename T>
array<T>::array(array &arr)
{
	_size = arr._size;
	_tab = arr._tab;
}

template<typename T>
array<T> &array<T>::operator=(array<T> &src)
{
	this->_size = src._size;
	this->_tab = src._tab;
	return *this;
}

template<>
void array<bool>::dump()const
{
	std::cout << "[";
	for (unsigned int i = 0; i < _size+1; i++)
	{
		if (_tab[i])
			std::cout << "true";
		else
			std::cout << "false";
		if (i+1 != _size+1)
			std::cout << ", ";

	}
	std::cout << "]\n";
}

template<typename T>
void array<T>::dump()const
{
	std::cout << "[";
	for (unsigned int i = 0; i < _size+1; i++)
	{
		std::cout << _tab[i];
		if (i+1 != _size+1)
			std::cout << ", ";
	}
	std::cout << "]\n";
}

template<typename T>
T &array<T>::operator[](unsigned int place)
{
	if (place > _size) {
		T *tmp = this->_tab;
		_tab = new T[place];
		_size = place;
		for (unsigned int i = 0; i < _size; ++i) {
			this->_tab[i] = tmp[i];
		}
	}
	return this->_tab[place];
}

template<typename T>
T &array<T>::operator[](unsigned int place) const
{
	if (place > _size) {
		throw std::exception();
	}
	return this->_tab[place];
}

template<typename T>
unsigned int array<T>::size() const
{
	return _size;
}

template<typename T>
template<typename U>
array<U> &array<T>::convertTo(U (*convert)(const T &)) const
{
	array<U> *newArr = new array<U>(this->_size);
	for (unsigned int i = 0; i < _size + 1; ++i) {
		auto elem = convert(this->_tab[i]);
		(*newArr)[i] = elem;
	}
	return *newArr;
}

#endif //CPP_D15_EX05_HPP
