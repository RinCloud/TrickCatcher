#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<vector<int>>> F(N, vector<vector<int>>(5, vector<int>(2)));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> F[i][j][k];
            }
        }
    }
    
    vector<vector<int>> P(N, vector<int>(11));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 10; j++) {
            cin >> P[i][j];
        }
    }
    
    int max_profit = -1e9;
    
    for (int mask = 1; mask < (1 << 10); mask++) {
        vector<int> open_periods(N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 2; k++) {
                    if (F[i][j][k] && ((1 << (2 * j + k)) & mask)) {
                        open_periods[i]++;
                    }
                }
            }
        }
        
        int profit = 0;
        for (int i = 0; i < N; i++) {
            profit += P[i][open_periods[i]];
        }
        
        max_profit = max(max_profit, profit);
    }
    
    cout << max_profit << endl;
    
    return 0;
}