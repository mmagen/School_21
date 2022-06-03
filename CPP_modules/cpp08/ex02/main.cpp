#include "mutantstack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);
    std::cout << "s.top = " << s.top() << " mstack.top = " << mstack.top() << std::endl;
    mstack.push(10);
    s = mstack;
    std::cout << "s.top = " << s.top() << " mstack.top = " << mstack.top() << std::endl;
    s.pop();
    std::cout << "s.top = " << s.top() << " mstack.top = " << mstack.top() << std::endl;
    return 0;
}
