#include <iostream>
using namespace std;


int max(int* arr, int size){
    int init = 0;

    for(int i = 0; i < size; ++i){
        if (*(arr + i) >= init)
            init = *(arr + i) ; }
    return init;
}

int main (int argc, char *argv[]) {
    int arr [] = {3, 11, 7, 2, 9};
    int size = 5;
    // int* ptr = arr;

    cout<<max(arr, size)<<endl;
    return 0;
}
