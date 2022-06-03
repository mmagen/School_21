#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
    std::list<int> myList;
    for (int count=0; count < 5; count += 2)
        myList.push_back(count);
    try {
    	std::cout << *easyfind(myList, 2) << std::endl;
    }
    catch (std::exception &e) {
    	std::cout << e.what() << std::endl;
    }

    std::vector<int> myVector;
    for (int count=0; count < 5; count += 2)
        myVector.push_back(count);
    try {
    	std::cout << *easyfind(myVector, 4) << std::endl;
    }
    catch (std::exception &e) {
    	std::cout << e.what() << std::endl;
    }

    try {
        std::cout << *easyfind(myVector, 5) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
