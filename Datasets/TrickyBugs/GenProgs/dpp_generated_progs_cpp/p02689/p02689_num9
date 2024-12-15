#include <iostream>
#include <vector>

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
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        adj[A].push_back(B);
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        bool good = true;
        for (int j = 0; j < adj[i].size(); j++) {
            if (H[i] <= H[adj[i][j]]) {
                good = false;
                break;
            }
        }
        if (good) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}