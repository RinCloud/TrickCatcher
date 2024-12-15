#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    S.replace(0, 4, "2018");

    std::cout << S << std::endl;

    return 0;
}