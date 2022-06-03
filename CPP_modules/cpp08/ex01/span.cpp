#include "span.hpp"

Span::Span(): _n(1) {}

Span::Span(unsigned int n): _n(n)
{
	if (n == 0)
		throw std::overflow_error("Ноль нельзя!");
}

Span::Span(const Span &source)
{
	*this = source;
}

Span &Span::operator=(const Span &source)
{
	_n = source._n;
	_my_vector = source._my_vector;
	return *this;
}

int Span::shortestSpan()
{
	if (_my_vector.size() 	< 2)
		throw std::overflow_error("В контейнере меньше двух значений!");
	std::sort(_my_vector.begin(), _my_vector.end());
	int min = _getSpan(_my_vector[0], _my_vector[1]);
	for (unsigned int i = 1; i < _my_vector.size(); ++i)
	{
		int check = _getSpan(_my_vector[i], _my_vector[i + 1]);
		if (check < min)
			min = check;
	}
	return min;
}

int Span::longestSpan()
{
	if (_my_vector.size() < 2)
		throw std::overflow_error("В контейнере меньше двух значений!");
	std::sort(_my_vector.begin(), _my_vector.end());
	return _getSpan(_my_vector.at(0), _my_vector.at(_my_vector.size() - 1));
}

Span::~Span(){}

void Span::addNumber(int number)
{
	if (_my_vector.size() == _n)
		throw std::overflow_error("Контейнер полон!");
	_my_vector.push_back(number);
}

void Span::addRangeNumber(int left, int right)
{
	for (int i = left; i <= right; ++i)
	{
		addNumber(i);
	}
}

int Span::_getSpan(int num1, int num2)
{
	return num1 > num2 ? num1 - num2 : num2 - num1;
}