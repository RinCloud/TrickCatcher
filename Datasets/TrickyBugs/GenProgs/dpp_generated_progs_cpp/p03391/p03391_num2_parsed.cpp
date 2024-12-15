#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    std::vector<int> B(N);
    std::vector<int> diff(N);

    for (int i = 0; i < N; i++) {
        std::cin >> A[i] >> B[i];
        diff[i] = A[i] - B[i];
    }

    std::sort(diff.begin(), diff.end());

    long long int count = 0;
    int i = 0;
    while (i < N && diff[i] <= 0) {
        count += B[i];
        i++;
    }

    long long int remaining_sum = 0;
    for (; i < N; i++) {
        count += A[i];
        remaining_sum += diff[i];
    }
    count += std::min(remaining_sum, 0LL);

    std::cout << count << std::endl;

    return 0;
}