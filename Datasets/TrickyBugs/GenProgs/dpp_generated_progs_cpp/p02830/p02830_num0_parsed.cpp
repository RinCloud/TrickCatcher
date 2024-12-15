#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::string S, T;
    std::cin >> S >> T;

    std::string result;
    for (int i = 0; i < N; ++i) {
        result += S[i];
        result += T[i];
    }

    std::cout << result << std::endl;

    return 0;
}