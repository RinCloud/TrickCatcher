#include <iostream>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    int minSum = A * (N - 1) + B;
    int maxSum = A + B * (N - 1);

    int diffSums = (maxSum - minSum) + 1;

    if (A == B)
        diffSums = 1;

    if (B < A || N == 1)
        diffSums = 0;
    
    std::cout << diffSums << std::endl;

    return 0;
}