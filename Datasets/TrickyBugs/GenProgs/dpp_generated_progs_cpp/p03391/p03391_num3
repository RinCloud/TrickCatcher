#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    long long int candies = 0;
    long long int min_diff = 0; // minimum difference between A and B

    for (int i = 0; i < N; i++) {
        candies += min(A[i], B[i]); // give candies for equal elements in A and B
        min_diff += max(A[i] - B[i], 0); // update the minimum difference
    }

    // find the maximum number of candies we can give by matching the remaining differences
    for (int i = 0; i < N; i++) {
        if (A[i] > B[i] && min_diff > 0) {
            long long int diff = min(A[i] - B[i], min_diff);
            candies += diff;
            min_diff -= diff;
        }
    }

    cout << candies << endl;

    return 0;
}