#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // Read the heights of the columns
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    // Sort the heights in non-decreasing order
    sort(heights.begin(), heights.end());

    // Determine the number of rows to paint in each column
    long long total = 0;
    for (int i = 0; i < N - K; i++) {
        total += heights[i];
    }

    // Output the minimum number of operations required
    cout << total << endl;

    return 0;
}