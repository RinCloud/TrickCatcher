#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    // Read input
    int N, M;
    cin >> N >> M;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    vector<vector<int>> adj(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
    }

    // Find good observatories
    vector<int> inDegree(N, 0);
    for (int i = 0; i < N; i++) {
        for (int j : adj[i]) {
            inDegree[j]++;
        }
    }
    int goodCount = 0;
    for (int i = 0; i < N; i++) {
        if (inDegree[i] == 0) {
            int maxHeight = 0;
            bool isGood = true;
            for (int j : adj[i]) {
                maxHeight = max(maxHeight, H[j]);
                if (H[i] <= H[j]) {
                    isGood = false;
                    break;
                }
            }
            if (isGood || H[i] > maxHeight) {
                goodCount++;
            }
        }
    }

    // Output the result
    cout << goodCount << endl;

    return 0;
}