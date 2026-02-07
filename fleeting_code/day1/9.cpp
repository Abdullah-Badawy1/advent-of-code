#include <iostream>
using namespace std;

int coutt(int num){
    int i = 0;
    int temp = 1;
    while(temp != 0){
        temp = num << 1; //0010
    }
    return i; 
}


int main (int argc, char *argv[]) {
    int num = 5; // 0101
    cout << coutt(num);
    return 0;
}

