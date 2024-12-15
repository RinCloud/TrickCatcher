#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    long long totalCandies = 0;
    long long minCandies = 0;
    bool isBothEqual = true;

    // Calculate total candies and minimum candies for each element
    for (int i = 0; i < N; i++) {
        totalCandies += A[i];
        if (A[i] > B[i]) {
            minCandies += B[i];
            isBothEqual = false;
        } else {
            minCandies += A[i];
        }
    }

    // If A and B are equal, no additional candies are given
    if (isBothEqual) {
        cout << 0 << endl;
    } else {
        // Subtract the minimum candies from total candies to get the maximum candies given to Takahashi
        cout << totalCandies - minCandies << endl;
    }

    return 0;
}