#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;
const int MAXN = 17;

int N, M;
vector<int> A;
int dp[MAXN][1<<MAXN];

int main() {
    // Read input
    cin >> N >> M;
    A.resize(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    // Initialize dp array
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j < (1 << N); j++) {
            dp[i][j] = 0;
        }
    }
    
    // Base case
    dp[0][0] = 1;
    
    // Dynamic programming
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < (1 << N); j++) {
            // Check if player 1 is eliminated in current state
            if (__builtin_popcount(j) % 2 == 0) {
                // Player 1 is eliminated, update dp state
                int prev_state = (j >> 1) & ((1 << (i - 1)) - 1);
                dp[i][j] = dp[i - 1][prev_state];
            } else {
                // Player 1 is still in the game, check if player 1 can be eliminated
                bool can_eliminate = true;
                for (int k = 0; k < M; k++) {
                    if (A[k] > 1 && A[k] <= (1 << i)) {
                        int opponent = A[k] - 1;
                        if ((j >> opponent) & 1) {
                            can_eliminate = false;
                            break;
                        }
                    }
                }
                // Update dp state
                if (can_eliminate) {
                    int prev_state = (j >> 1) & ((1 << (i - 1)) - 1);
                    dp[i][j] = dp[i - 1][prev_state];
                } else {
                    int prev_state = ((j >> 1) | (1 << (i - 1))) & ((1 << (i - 1)) - 1);
                    dp[i][j] = dp[i - 1][prev_state];
                }
            }
        }
    }
    
    // Calculate the answer
    int answer = dp[N][(1 << N) - 1];
    
    // Print the answer
    cout << answer << endl;
    
    return 0;
}