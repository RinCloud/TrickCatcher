#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string findShortestStringNotSubsequence(string A) {
    vector<vector<int>> dp(A.length() + 1, vector<int>(26));

    for (int i = A.length(); i >= 0; i--) {
        for (int j = 0; j < 26; j++) {
            if (i == A.length()) {
                dp[i][j] = A.length() + 1;
            } else {
                if (A[i] == j + 'a') {
                    dp[i][j] = i;
                } else {
                    dp[i][j] = dp[i + 1][j];
                }
            }
        }
    }

    string result;
    int position = 0;

    for (int i = 0; i < A.length(); i++) {
        int minChar = -1;

        for (int j = 0; j < 26; j++) {
            if (dp[i][j] > A.length()) {
                minChar = j;
                break;
            }
        }

        if (minChar == -1) {
            if (position == A.length() || A[position] < A[i]) {
                position = i;
            }
        } else {
            result.push_back((char) (minChar + 'a'));
            position = dp[position + 1][minChar];
        }
    }

    if (position < A.length()) {
        result.push_back(A[position]);
    }

    return result;
}

int main() {
    string A;
    cin >> A;

    string shortestString = findShortestStringNotSubsequence(A);
    cout << shortestString << endl;

    return 0;
}
