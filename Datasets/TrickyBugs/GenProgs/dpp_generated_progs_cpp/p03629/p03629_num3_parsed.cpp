#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string A;
    cin >> A;
    int n = A.length();
    vector<vector<int>> dp(n+1, vector<int>(26, 0));
    vector<int> next(26, -1);
    
    for (int i = n - 1; i >= 0; --i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            dp[i][c - 'a'] = dp[i+1][c - 'a'];
        }
        dp[i][A[i] - 'a'] = i+1;
    }
    
    string ans;
    int cur = 0;
    
    while (true) {
        bool found = false;
        
        for (char c = 'a'; c <= 'z'; ++c) {
            if (next[c - 'a'] == -1) {
                found = true;
                ans += c;
                break;
            }
        }
        
        if (!found) {
            break;
        }
        
        while (cur < n) {
            char c = A[cur];
            next[c - 'a'] = dp[next[c - 'a']][c - 'a'];
            ++cur;
        }
        
        reverse(ans.begin(), ans.end());
    }
    
    cout << ans << endl;
    
    return 0;
}
