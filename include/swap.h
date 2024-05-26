#ifndef _SWAP_H_
#define _SWAP_H_
#include <iostream>

class swap
{
public:
    swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void run();
    void printInfo();

public:
    int a;
    int b;
};

#endif