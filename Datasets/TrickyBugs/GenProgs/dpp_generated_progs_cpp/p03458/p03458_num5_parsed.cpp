#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> desires(K, vector<int>(K, 0));

    unordered_map<int, int> count;

    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;

        int pos_x = x % (2 * K);
        int pos_y = y % (2 * K);

        if (pos_x >= K && pos_y >= K) {
            desires[pos_x - K][pos_y - K]++;
        } else if (pos_x >= K) {
            desires[pos_x - K][pos_y]++;
        } else if (pos_y >= K) {
            desires[pos_x][pos_y - K]++;
        } else {
            desires[pos_x][pos_y]++;
        }

        if (c == 'B') {
            count[(pos_x % (2 * K)) * K + (pos_y % (2 * K))]++;
        } else {
            count[(pos_x % (2 * K)) * K + ((pos_y + K) % (2 * K))]++;
        }
    }

    int maxDesires = 0;

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < K; j++) {
            int desiresCount = 0;
            for (int x = i; x < 2 * K; x += K) {
                for (int y = j; y < 2 * K; y += K) {
                    desiresCount += desires[x % K][y % K];
                }
            }
            maxDesires = max(maxDesires, desiresCount);
        }
    }

    for (auto c : count) {
        maxDesires = max(maxDesires, c.second);
    }

    cout << maxDesires;

    return 0;
}