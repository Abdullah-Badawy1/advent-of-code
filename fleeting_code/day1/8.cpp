#include <iostream>
using namespace std;

bool evenodd(int num){

/* bitwiste evne detector */
    if(num & 1)         return 0;
    else 
        return 1;
}
int main (int argc, char *argv[]) {
    int num = 4;
    cout<< evenodd(num);
    return 0;
}
