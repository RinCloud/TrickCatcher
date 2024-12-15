#include <iostream>
#include <vector>

int main() {
    int N, X;
    std::cin >> N >> X;

    std::vector<int> L(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> L[i];
    }

    int count = 1; // Count the starting position
    int coord = 0;
    for (int i = 0; i < N; ++i) {
        coord += L[i];
        if (coord <= X) {
            count++;
        } else {
            break;
        }
    }

    std::cout << count << std::endl;

    return 0;
}