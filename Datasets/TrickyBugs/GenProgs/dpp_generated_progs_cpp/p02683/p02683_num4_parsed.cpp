#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;
    
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));
    
    for (int i = 0; i < N; i++) {
        cin >> C[i];
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    
    int minimum_cost = INT_MAX;

    for (int mask = 0; mask < (1 << N); mask++) {
        int total_cost = 0;
        vector<int> skills(M, 0);
        
        for (int i = 0; i < N; i++) {
            if ((mask >> i) & 1) {
                total_cost += C[i];
                for (int j = 0; j < M; j++) {
                    skills[j] += A[i][j];
                }
            }
        }
        
        bool achievable = true;
        for (int j = 0; j < M; j++) {
            if (skills[j] < X) {
                achievable = false;
                break;
            }
        }
        
        if (achievable) {
            minimum_cost = min(minimum_cost, total_cost);
        }
    }
    
    if (minimum_cost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minimum_cost << endl;
    }
    
    return 0;
}
