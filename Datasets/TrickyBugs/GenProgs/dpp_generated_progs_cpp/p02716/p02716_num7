#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> dp(N);
    dp[0] = A[0];
    dp[1] = max(A[0], A[1]);
    
    for (int i = 2; i < N; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + A[i]);
    }
    
    cout << dp[N-1] << endl;
    
    return 0;
}