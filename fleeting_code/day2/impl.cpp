#include "header.h"


void printByValue(int x) {
    cout << "actual value " << x << endl;
}

void printByLvalueRef(int& x) {
    x += 5;
    cout << "LvalueRef add 5 to it " << x << endl;
}

void printByConstLvalueRef(const int& x) {
    cout << "constLvalueRef: " << x << endl;
}

void printByRvalueRef(int&& x) {
    cout << "RvalueRef: " << x << endl;
}
//===============================================


unique_ptr<int> makeUniqueInt(int value) {
    return make_unique<int>(value);
}

shared_ptr<int> makeSharedInt(int value) {
    return make_shared<int>(value);
}

unique_ptr<double[]> makeUniqueDoubleArray(int size, double initValue) {
    unique_ptr<double[]> arr = make_unique<double[]>(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = initValue;
    }
    return arr;
}

