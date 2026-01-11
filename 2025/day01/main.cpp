#include "main.h"

int SumOfBatteries() {
    int sum = 0;
    std::string line;
    std::ifstream file("input.txt");

    while (std::getline(file, line)) {
        int max = 0;
        int i = 0;

        while (i < line.size()) {
            int max1digit = line[i] - '0';
            int k = i + 1;

            while (k < line.size()) {
                int max2digit = line[k] - '0';
                int number = max1digit * 10 + max2digit;

                max = (number > max) ? number : max;
                k++;
            }
            i++;
        }
        sum += max;
    }
    file.close();
    return sum;
}

int main(int argc, char *argv[]) {
    std::cout << SumOfBatteries() << std::endl;
    return 0;
}
