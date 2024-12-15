#include <iostream>
#include <vector>
#include <algorithm>

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

    int count = 0;
    for (int i = 0; i < (1 << N); i++) {
        vector<int> state(N + 1, 0);
        int valid = true;
        for (int j = 0; j < N; j++) {
            if ((i >> j) & 1) {
                state[j + 1] = 1;
            }
        }

        for (int j = 0; j < M; j++) {
            int sum = 0;
            for (int k = 0; k < switches[j].size(); k++) {
                sum += state[switches[j][k]];
            }
            if (sum % 2 != bulbs[j]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}