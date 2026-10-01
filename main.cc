#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calculator;

    int a = 10;
    int b = 5;

    std::cout << "Add: " << calculator.add(a, b) << std::endl;
    std::cout << "Subtract: " << calculator.subtract(a, b) << std::endl;

    return 0;
}
