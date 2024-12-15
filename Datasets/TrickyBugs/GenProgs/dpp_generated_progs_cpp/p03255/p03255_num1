#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    // Calculate the minimum energy required to put all the trash in the bin
    vector<long long> dp(N);
    dp[0] = X * x[0];
    for (int i = 1; i < N; i++) {
        dp[i] = dp[i - 1] + X * (x[i] - x[i - 1]); // Move to the next trash position
        for (int j = i - 1; j >= 0; j--) {
            long long cost = (i - j + 1) * (i - j + 1) * X; // Travel cost with k pieces of trash
            dp[i] = min(dp[i], dp[j] + cost + X * (x[i] - x[j + 1])); // Move all trash from j+1 to i to the bin
        }
    }
    cout << dp[N - 1] << endl;
    return 0;
}