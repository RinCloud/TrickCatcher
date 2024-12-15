#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    S[0] = '2';
    S[1] = '0';
    S[2] = '1';
    S[3] = '8';

    std::cout << S << std::endl;

    return 0;
}