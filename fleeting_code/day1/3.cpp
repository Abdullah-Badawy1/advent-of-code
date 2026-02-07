#include <iostream>
using namespace std;

void triagnel(int n){

    for (int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main (int argc, char *argv[]) {
    int n;
    cout << "Enter n "<< endl;
    cin >> n;
    triagnel(n);
    return 0;
}
