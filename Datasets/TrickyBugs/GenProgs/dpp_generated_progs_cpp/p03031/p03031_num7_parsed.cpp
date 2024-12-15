#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> switches(M);
    vector<int> bulbs(M);
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        switches[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> switches[i][j];
        }
    }
    for (int i = 0; i < M; i++) {
        cin >> bulbs[i];
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << N); bit++) {
        bool light = true;
        for (int i = 0; i < M; i++) {
            int cnt = 0;
            for (int j = 0; j < switches[i].size(); j++) {
                if (bit & (1 << (switches[i][j] - 1))) {
                    cnt++;
                }
            }
            if (cnt % 2 != bulbs[i]) {
                light = false;
                break;
            }
        }
        if (light) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}