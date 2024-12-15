#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> switches(M);
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        switches[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> switches[i][j];
        }
    }

    vector<int> p(M);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }

    int combinations = 0;
    for (int mask = 0; mask < (1 << N); mask++) {
        bool lightAll = true;
        for (int i = 0; i < M; i++) {
            int countOn = 0;
            for (int s : switches[i]) {
                if (mask & (1 << (s - 1))) {
                    countOn++;
                }
            }
            if (countOn % 2 != p[i]) {
                lightAll = false;
                break;
            }
        }
        if (lightAll) {
            combinations++;
        }
    }

    cout << combinations << endl;

    return 0;
}