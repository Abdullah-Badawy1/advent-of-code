#include "main.h"

int main() {
using namespace std;
    int x;
    ifstream file("file.txt");

    int arr1[1001];
    int arr2[1001];

    int i = 0;
    bool w = true;

    while (file >> x) {
        if (w) {
            arr1[i] = x;
        } else {
            arr2[i] = x;
            i++;
        }
        w = !w;
    }

    sort(arr1, arr1 + i);
    sort(arr2, arr2 + i);
    long long similarity = 0;

    int p1 = 0;
    int p2 = 0;

    while (p1 < i && p2 < i) {
        if (arr1[p1] == arr2[p2]) {
            int value = arr1[p1];
            int count = 0;

            while (p2 < i && arr2[p2] == value) {
                count++;
                p2++;
            }

            while (p1 < i && arr1[p1] == value) {
                similarity += value * count;
                p1++;
            }
        }
        else if (arr1[p1] < arr2[p2]) {
            p1++;
        }
        else {
            p2++;
        }
    }

    cout << similarity << '\n';
    return 0;
}
