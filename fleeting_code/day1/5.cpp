#include <iostream>
using namespace std;


void mR(int& num){
    num = (num << 1) + 10;
}

int main (int argc, char *argv[]) {
    int num;
    cin>>  num;
    mR(num);
    cout<<num<<endl;
    return 0;
}
