#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int A, B;
    std::cin >> A >> B;

    int lcm = A * B / gcd(A, B);
    std::cout << lcm << std::endl;

    return 0;
}