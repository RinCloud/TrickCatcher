#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N), B(N);
    for(int i = 0; i < N; ++i) {
        std::cin >> A[i] >> B[i];
    }

    long long candies = 0;
    std::vector<int> diff;
    for(int i = 0; i < N; ++i) {
        if(A[i] <= B[i]) {
            candies += A[i];
            B[i] -= A[i];
            A[i] = 0;
        } else {
            candies += B[i];
            A[i] -= B[i];
            B[i] = 0;
        }
        if(A[i] > 0) {
            diff.push_back(A[i]);
        }
    }

    std::sort(diff.rbegin(), diff.rend());

    for(int i = 0; i < diff.size(); ++i) {
        if(B[i] >= diff[i]) {
            candies += diff[i];
            B[i] -= diff[i];
        } else {
            candies += B[i];
            diff[i] -= B[i];
            B[i] = 0;
        }
    }

    std::cout << candies << std::endl;

    return 0;
}