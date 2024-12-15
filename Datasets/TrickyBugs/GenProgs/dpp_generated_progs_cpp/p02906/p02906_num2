#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> color(N, 0);
    vector<vector<int>> edges(N, vector<int>(N, 0));
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        edges[a][b] = 1;
        edges[b][a] = 1;
    }

    for (int i = 0; i < Q; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c == 0) {
            color[a] |= 1 << b;
        } else {
            color[a] |= 1 << b;
            color[b] |= 1 << a;
        }
    }

    string ans = "Yes";
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((color[i] & (1 << j)) && !edges[i][j]) {
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}