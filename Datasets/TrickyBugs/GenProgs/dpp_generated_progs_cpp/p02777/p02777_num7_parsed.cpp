#include <iostream>
#include <string>

int main() {
    std::string S, T, U;
    int A, B;

    std::cin >> S >> T >> A >> B >> U;

    // Decrease the count of S if U is equal to S
    int S_count = (U == S) ? (A - 1) : A;

    // Decrease the count of T if U is equal to T
    int T_count = (U == T) ? (B - 1) : B;

    std::cout << S_count << " " << T_count << std::endl;

    return 0;
}