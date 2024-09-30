#include <iostream>
#include <l2a.hpp>
#include <l2b.hpp>

int main(int, char**){
    std::cout << "Hello, from libs!\n";
    class L2A a;
    a.print();
    class L2B b;
    b.print();
    return 0;
    
}
