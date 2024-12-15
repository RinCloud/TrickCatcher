#include <iostream>
#include <vector>
#include <limits.h>
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
    
    int minCost = INT_MAX;
    
    for (int mask = 0; mask < (1 << N); mask++) {
        vector<int> knowledge(M);
        int cost = 0;
        
        for (int i = 0; i < N; i++) {
            if ((mask & (1 << i)) != 0) {
                cost += C[i];
                for (int j = 0; j < M; j++) {
                    knowledge[j] += A[i][j];
                }
            }
        }
        
        bool allGreaterThanX = true;
        for (int j = 0; j < M; j++) {
            if (knowledge[j] < X) {
                allGreaterThanX = false;
                break;
            }
        }
        
        if (allGreaterThanX) {
            minCost = min(minCost, cost);
        }
    }
    
    if (minCost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minCost << endl;
    }
    
    return 0;
}