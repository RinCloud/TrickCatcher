#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    vector<int> cards(3 * N);
    for (int i = 0; i < 3 * N; i++) {
        cin >> cards[i];
    }
 
    sort(cards.begin(), cards.end());
 
    vector<int> prefix_sum(3 * N + 1);
    for (int i = 0; i < 3 * N; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + cards[i];
    }
 
    vector<int> dp(3 * N + 1);
    for (int i = N; i <= 2 * N; i++) {
        dp[i] = prefix_sum[i] - prefix_sum[N];
    }
 
    for (int i = 2 * N + 1; i <= 3 * N; i++) {
        for (int j = N; j <= 2 * N; j++) {
            dp[i] = max(dp[i], dp[i - j] + prefix_sum[i] - prefix_sum[i - j] - prefix_sum[N]);
        }
    }
 
    int max_points = 0;
    for (int i = N; i <= 3 * N; i++) {
        max_points = max(max_points, dp[i]);
    }
 
    cout << max_points << endl;
 
    return 0;
}