#ifndef MODULE_CPP_ARRAY_HPP
#define MODULE_CPP_ARRAY_HPP
#include <iostream>
template <typename T>
class Array
{
	T* _array;
	unsigned int _size;

public:
	Array(): _size(0), _array(nullptr){}
	Array(unsigned int n) : _size(n)
	{
		_array = new T[n];
	}
	Array(Array const &src): _array(nullptr), _size(0)
	{
		*this = src;
	}
	~Array()
	{
		if (_array != nullptr)
			delete [] _array;
	}
	Array& operator=(Array const &src)
	{
		if (_array != nullptr)
			delete [] _array;
		_array = nullptr;
		_size = 0;
		if (src.size())
		{
			_size = src.size();
			_array = new T[_size];
			for (int i = 0; i < (int)_size; i++)
				_array[i] = src._array[i];
		}
		return *this;
	}
	T &operator[](unsigned int pos)
	{
		if (pos >= _size)
			throw (std::exception());
		else
			return _array[pos];
	}
	unsigned int size() const
	{
		return _size;
	}
};
#endif //MODULE_CPP_ARRAY_HPP
