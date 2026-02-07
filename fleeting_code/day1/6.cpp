#include <iostream>
using namespace std;

int sumptr (int *ptr, int size){
    int sum = 0;

    for (int i = 0; i < size; ++i){
        sum += *(ptr + i);
    }
    return sum;
}

int main (int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;
    int size = 4;

    cout << sumptr(ptr, size);
    return 0;
}

