#include <iostream>
#include <cmath>

int main() {
    std::string N;
    std::cin >> N;

    int digits = N.size();
    int answer = digits - 1;

    if (N[0] > '2') {
        answer++;
    }
    std::cout << answer << std::endl;

    return 0;
}
