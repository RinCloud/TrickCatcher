#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unordered_map<int, unordered_map<int, char>> grid;

    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        grid[x % (2 * K)][y % (2 * K)] = c;
    }

    vector<int> blackCount(2 * K, 0);
    vector<int> whiteCount(2 * K, 0);

    for (const auto& kv1 : grid) {
        int x = kv1.first;
        for (const auto& kv2 : kv1.second) {
            int y = kv2.first;
            char color = kv2.second;
            if ((x < K && y < K) || (x >= K && y >= K)) {
                if (color == 'B') {
                    blackCount[x]++;
                    blackCount[y]++;
                } else {
                    whiteCount[x]++;
                    whiteCount[y]++;
                }
            } else {
                if (color == 'B') {
                    whiteCount[x]++;
                    whiteCount[y]++;
                } else {
                    blackCount[x]++;
                    blackCount[y]++;
                }
            }
        }
    }

    int maxDesires = max(*max_element(blackCount.begin(), blackCount.end()),
                        *max_element(whiteCount.begin(), whiteCount.end()));
    cout << maxDesires << endl;

    return 0;
}