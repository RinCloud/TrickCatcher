#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    // Sort the array in ascending order
    std::sort(A.begin(), A.end());

    // The minimum possible number of different characters
    // is equal to the length of the smallest string
    int minChars = A[0];

    std::cout << minChars << std::endl;

    return 0;
}