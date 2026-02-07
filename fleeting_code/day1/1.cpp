#include <iostream>
using namespace std;

double average(int a, int b, int c, int nums){
    return (a + b + c) / (double)nums; // 3.0
}
int main (int argc, char *argv[]) {
    int a, b, c; 
    a = 5;
    b = 10;
    c = 7;
    int nums = 3;
    double result = average(a, b, c, nums);
    cout << result<< "\n";
    return 0;
}
