#include <iostream>

void knowww(int& input){
    
        std::cout << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,," << std::endl;
        std::cout << "the address of the x : = " << &input << std::endl;
        std::cout << "the address inside the pointer  : = " << input << std::endl;




}

int main(void){
    int x = 3;
    std::cout << x << std::endl;
    int* ptr = &x;
    std::cout << "the address of the x : = " << &x << std::endl;
    std::cout << "the address inside the pointer  : = " << ptr << std::endl;
    std::cout << "the address of the pointer  : = " << &ptr << std::endl;
    std::cout <<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,," << std::endl;
    int& ref = x;
    std::cout << "the address of the x : = " << &x << std::endl;
    std::cout << "the address inside the pointer  : = " << ref << std::endl;
    std::cout << "the address of the pointer  : = " << &ref << std::endl;
    knowww(x);

    

    return(0);
}
