#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::string strN = std::to_string(N);
    int count = 1;

    for (int i = 1; i < strN.length(); ++i) {
        if (strN[i] == strN[i-1]) {
            ++count;
            if (count >= 3) {
                std::cout << "Yes";
                return 0;
            }
        } else {
            count = 1;
        }
    }

    std::cout << "No";
    return 0;
}