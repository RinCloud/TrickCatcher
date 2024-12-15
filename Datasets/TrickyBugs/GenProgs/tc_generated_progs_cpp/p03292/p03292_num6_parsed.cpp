#include <iostream>
#include <cmath>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    std::cout << std::min(abs(A - B) + abs(B - C), std::min(abs(B - C) + abs(C - A), abs(C - A) + abs(A - B)));
}
