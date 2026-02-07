#include "main.h"

int main() {
using namespace std;
    int x;
    ifstream file("file.txt");

    int arr1[1001];
    int arr2[1001];

    int d = 0;
    int i = 0;

    bool w = 1;

    while (file >> x) {
            if (w) {
                arr1[i] = x;
            } else {
                arr2[i] = x;
                ++i;
            }
            w = !w;
        }

    sort(arr1, arr1 + i);
    sort(arr2, arr2 + i);

    int j = 0;
    while (j < i) {
            d += abs(arr1[j] - arr2[j]);
            ++j;
        }
    


    cout << d << '\n';

int finalll = 0;
int a = 0;
while (a < i) {
    int k = 0;
    int b = 0;

    while (b < i) {
        if (arr1[a] == arr2[b]) {
            ++k;
        }
        ++b;
    }

    finalll += (arr1[a] * k);
    ++a;
}

cout << finalll << '\n';
    return 0;
}
