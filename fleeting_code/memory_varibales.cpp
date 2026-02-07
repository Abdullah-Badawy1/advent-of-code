#include <iostream>

const int global_const = 100;
int global_var = 200;

int main() {
    const int local_const = 300;
    int local_var = 400;
    
    std::cout << "Addresses:\n";
    std::cout << "global_const: " << &global_const << " (likely in .rodata)\n";
    std::cout << "global_var:   " << &global_var << " (in .data)\n";
    std::cout << "local_const:  " << &local_const << " (on stack)\n";
    std::cout << "local_var:    " << &local_var << " (on stack)\n";
    
    return 0;
}
