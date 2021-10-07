#include "function.hpp"
#include <iostream>

int calcul(int x, char s, int y)
{
    int result = 0;

    switch (s)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        result = x / y;
        break;
    default:
        std::cout << "les seuls character accepté sont, + - * /";
    }
    return result;
}