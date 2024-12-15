#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> switches(M, vector<int>(N+1, 0));

    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;

        for (int j = 0; j < k; j++) {
            int switch_number;
            cin >> switch_number;
            switches[i][switch_number] = 1;
        }
    }

    vector<int> p(M);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }

    int combinations = 0;

    for (int i = 0; i < (1 << N); i++) {
        bool all_bulbs_lit = true;

        for (int j = 0; j < M; j++) {
            int switch_count = 0;

            for (int k = 1; k <= N; k++) {
                if (switches[j][k] && ((i >> (k-1)) & 1)) {
                    switch_count++;
                }
            }

            if (switch_count % 2 != p[j]) {
                all_bulbs_lit = false;
                break;
            }
        }

        if (all_bulbs_lit) {
            combinations++;
        }
    }

    cout << combinations << endl;

    return 0;
}