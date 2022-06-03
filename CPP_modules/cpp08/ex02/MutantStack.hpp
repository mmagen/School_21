#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(): std::stack<T>() {};
    MutantStack(MutantStack &source): std::stack<T>(source) {};
    MutantStack &operator=(MutantStack &source)
    {
        if (this == &source)
            return *this;
        this->c = source.c;
        return *this;
    };
    ~MutantStack<T>() {};
    iterator begin()
    {
        return std::stack<T>::c.begin();
    };
    iterator end()
    {
        return std::stack<T>::c.end();
    };
};

#endif