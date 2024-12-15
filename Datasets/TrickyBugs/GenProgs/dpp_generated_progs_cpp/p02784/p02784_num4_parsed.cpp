#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> moves(N);
    for (int i = 0; i < N; i++) {
        cin >> moves[i];
    }
    
    vector<bool> dp(H+1, false);
    dp[0] = true;
    for (int i = 1; i <= H; i++) {
        for (int j = 0; j < N; j++) {
            if (i - moves[j] >= 0 && dp[i - moves[j]]) {
                dp[i] = true;
                break;
            }
        }
    }
    
    if (dp[H]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}