#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

class ValueNotFoundException: public std::exception {
public:
    virtual const char *what() const throw()
    {
        return "Value not found";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int elem) {
    typename T::iterator it = std::find(container.begin(), container.end(), elem);
    if (it == container.end())
        throw ValueNotFoundException();
    return it;
}
#endif