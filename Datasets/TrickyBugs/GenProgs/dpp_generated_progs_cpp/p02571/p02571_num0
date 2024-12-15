#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minCharsChanged(string S, string T) {
    int n = S.length();
    int m = T.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for (int i = 0; i <= m; i++) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
            }
        }
    }

    return dp[n][m];
}

int main() {
    string S, T;
    cin >> S >> T;

    int minChanged = minCharsChanged(S, T);
    cout << minChanged << endl;

    return 0;
}