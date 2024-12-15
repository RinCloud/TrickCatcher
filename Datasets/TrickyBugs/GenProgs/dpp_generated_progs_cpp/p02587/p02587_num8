#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i++] != s[j--]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<string> strings(N);
    vector<long long> costs(N);
    vector<long long> dp(1 << N, LLONG_MAX);

    for (int i = 0; i < N; i++) {
        cin >> strings[i] >> costs[i];
    }

    dp[0] = 0;

    for (int mask = 0; mask < (1 << N); mask++) {
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                continue;
            }

            string reverseString = strings[i];
            reverse(reverseString.begin(), reverseString.end());

            for (int j = mask; j > 0; j = (j - 1) & mask) {
                if (strings[i] == reverseString) {
                    dp[mask | (1 << i)] = min(dp[mask | (1 << i)], dp[j] + costs[i]);
                } else if (isPalindrome(strings[i].substr(0, strings[i].length() - j))) {
                    dp[mask | (1 << i)] = min(dp[mask | (1 << i)], dp[j] + costs[i]);
                }
            }
        }
    }

    long long answer = dp[(1 << N) - 1];
    if (answer == LLONG_MAX) {
        answer = -1;
    }

    cout << answer << endl;

    return 0;
}