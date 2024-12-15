#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.size();
    
    vector<int> dp(n+1);
    vector<int> freq(2019);
    
    dp[0] = 1;
    int num = 0;
    long long ans = 0;
    
    for (int i = 1; i <= n; i++) {
        num = (num * 10 + (S[i-1] - '0')) % 2019;
        dp[i] = freq[num];
        freq[num]++;
        ans += dp[i];
    }
    
    cout << ans << endl;
    
    return 0;
}