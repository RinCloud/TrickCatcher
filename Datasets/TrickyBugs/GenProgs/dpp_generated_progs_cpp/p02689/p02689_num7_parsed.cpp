#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    vector<vector<int>> G(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        bool good = true;
        for (int j = 0; j < G[i].size(); j++) {
            if (H[i] <= H[G[i][j]]) {
                good = false;
                break;
            }
        }
        if (good) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}