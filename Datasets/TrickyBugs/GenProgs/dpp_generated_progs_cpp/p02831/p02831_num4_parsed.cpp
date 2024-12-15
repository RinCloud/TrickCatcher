#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    int lcm = A * B;

    while (B != 0) {
        int temp = A % B;
        A = B;
        B = temp;
    }

    int gcd = A;

    int result = lcm / gcd;

    std::cout << result;

    return 0;
}