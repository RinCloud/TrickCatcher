#include <iostream>
#include <vector>

int getSmallestSum(int K) {
    std::vector<int> remainders(K, 0); // vector to keep track of remainders
    std::vector<int> digits(K, -1); // vector to store the digit at each multiple
    digits[0] = 0; // the first multiple is a single digit

    int num = 0; // current multiple
    int sum = 0; // sum of the digits

    // find the smallest multiple of K with each possible digit
    for (int i = 1; i < K; i++) {
        num = (num * 10 + 1) % K; // new multiple

        if (digits[num] != -1) {
            // found a cycle, the smallest multiple with each digit has been found
            // break the cycle and calculate the smallest sum
            for (int j = digits[num]; j < i; j++) {
                sum += digits[j];
            }
            break;
        } else {
            digits[num] = i;
        }
    }

    return sum;
}

int main() {
    int K;
    std::cin >> K;

    int smallestSum = getSmallestSum(K);
    std::cout << smallestSum;

    return 0;
}