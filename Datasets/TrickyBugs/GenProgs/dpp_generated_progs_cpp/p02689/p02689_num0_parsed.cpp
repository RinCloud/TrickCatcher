#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> H(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> H[i];
    }
    
    vector<bool> isGood(N + 1, true);
    vector<vector<int>> adj(N + 1);
    
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        
        if (H[A] >= H[B]) {
            isGood[B] = false;
        }
        if (H[B] >= H[A]) {
            isGood[A] = false;
        }
        
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (isGood[i]) {
            bool isHighest = true;
            for (int j : adj[i]) {
                if (H[j] >= H[i]) {
                    isHighest = false;
                    break;
                }
            }
            if (isHighest) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}