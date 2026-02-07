#include <iostream>
using namespace std;

void funnnn(int num){
    for(int i = 1; i < num; i++){
        if (i == 50)
            break;
        if (i % 3 == 0)
            continue;
        if (i % 5 == 0){
            cout<<"Buzz";
        }
        cout << i;
    }
}

int main (int argc, char *argv[]) {
    int num;
    cout << "enter num" << endl;
    cin >> num;
    funnnn(num);

    return 0;
}
