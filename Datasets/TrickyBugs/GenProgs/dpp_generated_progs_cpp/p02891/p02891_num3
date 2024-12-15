#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::cin >> S;

    long long K;
    std::cin >> K;

    int N = S.length();

    // Count the number of adjacent characters that are the same
    int sameCount = 0;
    for (int i = 1; i < N; i++) {
        if (S[i] == S[i - 1]) {
            sameCount++;
        }
    }

    // Calculate the minimum number of operations required
    long long operations = sameCount * K / 2;

    // If K is odd, add an extra operation
    if (K % 2 == 1 && sameCount > 0) {
        operations++;
    }

    std::cout << operations << std::endl;

    return 0;
}