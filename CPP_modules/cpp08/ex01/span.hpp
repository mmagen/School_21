#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class Span {
    unsigned int _n;
    std::vector<int> _my_vector;
    int _getSpan(int num1, int num2);

public:
    Span();
    Span(unsigned int n);
    Span(const Span &source);
    Span &operator= (const Span &source);
    int shortestSpan();
    int longestSpan();
    ~Span();
    void addNumber(int number);
    void addRangeNumber(int left, int right);
};

#endif