#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>

using namespace std;

string findShortestNonSubsequence(string A) {
    string result = "a";
    int n = A.length();
    
    vector<vector<int>> dp(n + 1, vector<int>(26, INT_MAX));
    
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 26; j++) {
            dp[i][j] = dp[i + 1][j];
        }
        dp[i][A[i] - 'a'] = i;
    }
    
    for (int j = 0; j < 26; j++) {
        if (dp[0][j] == INT_MAX) {
            result = string(1, 'a' + j);
            break;
        }
    }
    
    return result;
}

int main() {
    string A;
    cin >> A;
    
    string shortestNonSubsequence = findShortestNonSubsequence(A);
    
    cout << shortestNonSubsequence << endl;
    
    return 0;
}
