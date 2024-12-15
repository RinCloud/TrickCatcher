#include<bits/stdc++.h>
using namespace std;

int main() {
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
        a--, b--;
        adj[a].push_back(b);
    }

    vector<bool> good(N, true);
    for (int i = 0; i < N; i++) {
        for (int j : adj[i]) {
            if (H[i] <= H[j]) {
                good[i] = false;
                break;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (good[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}