#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    // Map to store the count of desires for each cell
    map<pair<int, int>, int> desires;

    // Read the desires and update the count in the map
    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'B') {
            x = x % (2 * K);
            y = y % (2 * K);
            desires[{x, y}]++;
            desires[{x, y + K}]--;
            desires[{x + K, y}]--;
            desires[{x + K, y + K}]++;
        } else {
            x = x % (2 * K);
            y = y % (2 * K);
            desires[{x, y}]--;
            desires[{x, y + K}]++;
            desires[{x + K, y}]++;
            desires[{x + K, y + K}]--;
        }
    }

    // Calculate the prefix sum of desires for each cell
    vector<vector<int>> prefixSum(2 * K, vector<int>(2 * K, 0));
    int maxCount = 0;
    for (auto& desire : desires) {
        pair<int, int> cell = desire.first;
        int count = desire.second;
        prefixSum[cell.first][cell.second] = count;
        if (cell.first > 0) prefixSum[cell.first][cell.second] += prefixSum[cell.first - 1][cell.second];
        if (cell.second > 0) prefixSum[cell.first][cell.second] += prefixSum[cell.first][cell.second - 1];
        if (cell.first > 0 && cell.second > 0) prefixSum[cell.first][cell.second] -= prefixSum[cell.first - 1][cell.second - 1];
        maxCount = max(maxCount, prefixSum[cell.first][cell.second]);
    }

    // Print the maximum number of desires that can be satisfied at the same time
    cout << maxCount << endl;

    return 0;
}