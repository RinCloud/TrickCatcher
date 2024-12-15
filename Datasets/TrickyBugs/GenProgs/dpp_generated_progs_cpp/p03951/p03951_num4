#include <iostream>
#include <string>

int main() {
    int N;
    std::string s, t;
    std::cin >> N >> s >> t;

    int shortestLength = N + N;
    for (int i = N; i >= 0; i--) {
        if (s.substr(N - i) == t.substr(0, i)) {
            shortestLength = N + N - i;
            break;
        }
    }

    std::cout << shortestLength << std::endl;

    return 0;
}