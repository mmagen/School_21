#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span sp2 = Span(100001);
    sp2.addRangeNumber(1, 60000);
    sp2.addRangeNumber(90000, 130000);
    try {
        sp2.addNumber(3145);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}
