#include <iostream>
#include "Bank.h"
#include "Complex.h"
int main(int argc, char const *argv[])
{   
    Complex one(10,10);
    Complex two(7,6);
    Complex three = one + two;
    std::cout<<three.get_real()<<std::endl;
}
