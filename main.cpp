#include <iostream>
#include "swap.h"

int main()
{
    swap test_swap(5, 6);

    test_swap.printInfo();
    test_swap.run();
    test_swap.printInfo();

    std::cout << "Hello world." << std::endl;
}