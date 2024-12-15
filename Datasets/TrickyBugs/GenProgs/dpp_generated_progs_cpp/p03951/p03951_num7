#include <iostream>
#include <string>

int main() {
    int N;
    std::string s, t;
    std::cin >> N >> s >> t;

    // Check if the given string s and t satisfy the conditions
    int length = N;
    for (int i = 0; i < N; i++) {
        if (s.substr(0, i + 1) == t.substr(N - i - 1, i + 1)) {
            length = std::max(length, N + i + 1);
        }
    }

    std::cout << length << std::endl;

    return 0;
}