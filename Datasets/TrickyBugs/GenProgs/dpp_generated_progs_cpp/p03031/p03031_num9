#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N, M;
    cin >> N >> M;

    vector<vector<int>> switches_connected_to_bulb(M);
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        switches_connected_to_bulb[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> switches_connected_to_bulb[i][j];
        }
    }

    vector<int> bulb_states(M);
    for (int i = 0; i < M; i++) {
        cin >> bulb_states[i];
    }

    // Calculate the number of combinations
    int combinations = 0;
    for (int mask = 0; mask < (1 << N); mask++) {
        bool all_bulbs_lit = true;
        for (int i = 0; i < M; i++) {
            int cnt = 0;
            for (int switch_idx : switches_connected_to_bulb[i]) {
                if (mask & (1 << (switch_idx - 1))) {
                    cnt++;
                }
            }
            if (cnt % 2 != bulb_states[i]) {
                all_bulbs_lit = false;
                break;
            }
        }
        if (all_bulbs_lit) {
            combinations++;
        }
    }

    // Print the result
    cout << combinations << endl;

    return 0;
}