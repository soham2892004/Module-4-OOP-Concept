 // main.cpp

#include <iostream>
#include "max_number.h"

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    NumberPair pair(a, b);
    int max = MaxNumberFinder::findMax(pair);

    std::cout << "The maximum of " << a << " and " << b << " is: " << max << std::endl;

    
}
