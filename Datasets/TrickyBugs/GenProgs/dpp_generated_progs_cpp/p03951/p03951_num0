#include <iostream>
#include <string>

int main() {
    int N;
    std::string s, t;
    std::cin >> N >> s >> t;

    int shortestLength = 2 * N; // Initialize with twice the length of N

    // Check all possible lengths of the middle part of the string
    for (int i = N; i >= 0; i--) {
        std::string middlePart = s.substr(N - i);
        if (middlePart == t.substr(0, i)) {
            int currentLength = N + i;
            shortestLength = std::min(shortestLength, currentLength);
        }
    }

    std::cout << shortestLength << std::endl;

    return 0;
}