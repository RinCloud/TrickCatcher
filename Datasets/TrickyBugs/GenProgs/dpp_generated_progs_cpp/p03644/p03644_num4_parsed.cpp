#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int answer = 1;

    for (int i = answer + 1; i <= N; i++) {
        if (i % 2 == 0 && i > answer) {
            answer = i;
        }
    }

    std::cout << answer << std::endl;

    return 0;
}