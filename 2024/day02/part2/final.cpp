#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>

int funnn() {
    std::ifstream file("input.txt");
    std::string line;
    int counter = 0;

    while (getline(file, line)) {
        std::stringstream ss(line);

        std::vector<int> levels;
        int x;
        while (ss >> x)
            levels.push_back(x);


        bool lineCorrect = false;

        for (int removeIndex = -1; removeIndex < (int)levels.size(); removeIndex++) {

            int previous;
            bool first = true;
            int modee = 0;
            bool SafeOrnot = true;
            for (int i = 0; i < (int)levels.size(); i++) {
                if (i == removeIndex) continue;

                int current = levels[i];
                if (first) {
                    previous = current;
                    first = false;
                    continue;
                }

                int diff = current - previous;

                if (abs(diff) < 1 || abs(diff) > 3) {
                    SafeOrnot = false;
                    break;
                }

                if (diff > 0) {
                    if (modee == 0) modee = 1;
                    else if (modee == -1) {
                        SafeOrnot = false;
                        break;
                    }
                }
                else if (diff < 0) {
                    if (modee == 0) modee = -1;
                    else if (modee == 1) {
                        SafeOrnot = false;
                        break;
                    }
                }

                previous = current;
            }

            if (SafeOrnot) {
                lineCorrect = true;
                break;
            }
            }

            if (lineCorrect)
                counter++;
        }

    file.close();
    return counter;
}

int main() {
    int currents = funnn();
    std::cout << currents << std::endl;
    return 0;
}
