#include <iostream>

int main() {
    int N, A;
    std::cin >> N >> A;

    if (N % 500 <= A) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}