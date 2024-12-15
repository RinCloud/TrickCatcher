#include <iostream>
#include <cmath>

long long int minOperations(long long int x) {
    // Find the closest multiple of 7 less than or equal to x
    long long int closestMultiple = (x / 7) * 7;

    // Calculate the difference between x and the closest multiple
    long long int diff = x - closestMultiple;

    // Calculate the number of operations needed to reach the closest multiple
    long long int operations = diff / 2;

    // If the difference is odd, we need an additional operation
    if (diff % 2 != 0) {
        operations++;
    }

    // Return the number of operations needed
    return operations;
}

int main() {
    long long int x;
    std::cin >> x;

    long long int result = minOperations(x);

    std::cout << result << std::endl;

    return 0;
}