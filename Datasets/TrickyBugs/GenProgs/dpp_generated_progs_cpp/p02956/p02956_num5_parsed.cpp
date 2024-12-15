#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 998244353;

// Function to calculate the sum of f(T) over all non-empty subsets T of S
int calculateSum(int N, vector<pair<int, int>>& points) {
    // Sorting the points based on x-coordinate
    sort(points.begin(), points.end());

    vector<long long> prefixSumX(N);
    vector<long long> prefixSumY(N);

    // Calculating prefix sum of x-coordinates and y-coordinates
    prefixSumX[0] = points[0].first;
    prefixSumY[0] = points[0].second;
    for (int i = 1; i < N; i++) {
        prefixSumX[i] = prefixSumX[i-1] + points[i].first;
        prefixSumY[i] = prefixSumY[i-1] + points[i].second;
    }

    long long sum = 0;

    // Iterating through all possible subsets
    for (int i = 0; i < N; i++) {
        // Adding f(T) for the current subset

        // Calculating f(T) for x-coordinate
        long long xSubsets = (prefixSumX[i] - (i > 0 ? prefixSumX[i-1] : 0)) * (N-i);
        sum = (sum + xSubsets) % MOD;

        // Calculating f(T) for y-coordinate
        long long ySubsets = (prefixSumY[i] - (i > 0 ? prefixSumY[i-1] : 0)) * (N-i);
        sum = (sum + ySubsets) % MOD;
    }

    return sum;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }

    int sum = calculateSum(N, points);
    cout << sum << endl;

    return 0;
}