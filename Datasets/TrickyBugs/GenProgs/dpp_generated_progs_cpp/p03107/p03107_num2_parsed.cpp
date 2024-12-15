#include <iostream>
#include <string>

int maxCubesToRemove(std::string S) {
    int countRed = 0;
    int countBlue = 0;
    int maxRemove = 0;

    int N = S.length();
    for (int i = 0; i < N; i++) {
        if (S[i] == '0') {
            countRed++;
        } else {
            countBlue++;
        }
    }

    maxRemove = 2 * std::min(countRed, countBlue);

    return maxRemove;
}

int main() {
    std::string S;
    std::cin >> S;

    int result = maxCubesToRemove(S);
    std::cout << result << std::endl;

    return 0;
}