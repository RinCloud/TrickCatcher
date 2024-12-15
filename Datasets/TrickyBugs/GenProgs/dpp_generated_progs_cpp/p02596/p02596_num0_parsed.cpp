#include <iostream>
#include <string>

int main() {
    int K;
    std::cin >> K;

    std::string temp = "";
    while (true) {
        temp += "7";
        int num = std::stoi(temp);
        if (num % K == 0) {
            std::cout << temp.size() << std::endl;
            return 0;
        }
        if (temp.size() > K) {
            std::cout << -1 << std::endl;
            return 0;
        }
    }

    return 0;
}