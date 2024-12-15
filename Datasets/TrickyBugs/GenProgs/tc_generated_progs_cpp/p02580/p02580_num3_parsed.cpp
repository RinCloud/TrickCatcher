#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;

    vector<int> H_count(H+1, 0);
    vector<int> W_count(W+1, 0);
    vector<pair<int, int>> targets(M);

    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        H_count[h]++;
        W_count[w]++;
        targets[i] = make_pair(h, w);
    }

    int max_H = 0;
    int max_W = 0;

    for (int i = 1; i <= H; i++) {
        max_H = max(max_H, H_count[i]);
    }

    for (int i = 1; i <= W; i++) {
        max_W = max(max_W, W_count[i]);
    }

    int max_Hcount = 0;
    int max_Wcount = 0;

    for (int i = 1; i <= H; i++) {
        if (H_count[i] == max_H) {
            max_Hcount++;
        }
    }

    for (int i = 1; i <= W; i++) {
        if (W_count[i] == max_W) {
            max_Wcount++;
        }
    }

    int max_targets = max_H + max_W;

    int cnt = 0;
    for (int i = 0; i < M; i++) {
        int r = targets[i].first;
        int c = targets[i].second;
        if (H_count[r] == max_H && W_count[c] == max_W) {
            cnt++;
        }
    }

    if (cnt == max_Hcount * max_Wcount) {
        cout << max_targets - 1 << endl;
    } else {
        cout << max_targets << endl;
    }

    return 0;
}