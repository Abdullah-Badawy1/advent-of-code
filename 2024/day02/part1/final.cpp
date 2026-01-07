
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

int funnn() {
    ifstream file("input.txt");
    string line;
    int counter = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        int num;
        int previous;
        bool first = true;
        int modee = 0; 
        bool check = true;

        while (ss >> num) {
            if (first) {
                previous = num;
                first = false;continue;
            }
            int diff = num - previous; //num = 5 previous = 7 diff -2 
            if (abs(diff) < 1 || abs(diff) > 3) {
                check = false;break;
            }
            if (diff > 0) { 
                if (modee == 0) modee = 1;
                else if (modee == -1) { 
                    check = false;break;
                }
            } else if (diff < 0) {
                if (modee == 0) modee = -1;
                else if (modee == 1) {
                    check = false;break;
                }
            }
            else {
                check = false;
                break;
            }
        previous = num;
        }
if (check) counter++;
    }
file.close();
return counter;
}

int main() {
    int nums = funnn();
    cout << nums << endl;
    return 0;
}
