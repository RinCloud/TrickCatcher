#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> dp(N+1, N+1);
    dp[0] = 0;
    
    for(int i = 1; i <= N; i++) {
        for(int j = 1; pow(6, j) <= i; j++) {
            dp[i] = min(dp[i], dp[i - pow(6, j)] + 1);
        }
        
        for(int k = 1; pow(9, k) <= i; k++) {
            dp[i] = min(dp[i], dp[i - pow(9, k)] + 1);
        }
    }
    
    cout << dp[N] << endl;
    
    return 0;
}