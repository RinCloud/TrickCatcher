#include <iostream>
#include <string>

int main() {
    int N;
    std::string s, t;

    std::cin >> N >> s >> t;

    int length = N;

    for (int i = 0; i < N; i++) {
        std::string newString = s.substr(0, i + 1) + t.substr(N - i - 1, i + 1);
        if (newString == s + t) {
            length = N + i + 1;
            break;
        }
    }

    std::cout << length << std::endl;

    return 0;
}