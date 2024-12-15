#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int weight, value;
};

int main() {
    int N, W;
    cin >> N >> W;

    vector<Item> items(N);
    for (int i = 0; i < N; i++) {
        cin >> items[i].weight >> items[i].value;
    }

    vector<vector<int>> dp(N+1, vector<int>(W+1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= W; j++) {
            if (items[i-1].weight <= j) {
                dp[i][j] = max(items[i-1].value + dp[i-1][j-items[i-1].weight], dp[i-1][j]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}
