#include <iostream>
#include <string>
using namespace std;

// #void swap(int a, int b);
void swap(int* a, int* b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
// void swap(int* a, int* b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main (int argc, char *argv[]) {

    const char *ptr = "Hello";

    cout<< ptr[1] <<endl;
    int a = 3;
    int b = 4;
    cout << "a = "<< a << " "<< "b = "<< b<< endl;
    swap(&a, &b);
    cout << "a = "<< a << " "<< "b = "<< b<< endl;
    return 0;
}
