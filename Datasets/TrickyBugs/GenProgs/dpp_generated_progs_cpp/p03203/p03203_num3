#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<pair<int, int>> obstacles(N);
    for (int i = 0; i < N; i++) {
        cin >> obstacles[i].first >> obstacles[i].second;
    }

    sort(obstacles.begin(), obstacles.end());

    int currentRow = 1;
    int currentCol = 1;
    int actions = 0;

    for (int i = 0; i < N; i++) {
        int obstacleRow = obstacles[i].first;
        int obstacleCol = obstacles[i].second;

        if (obstacleRow == currentRow && obstacleCol == currentCol + 1) {
            currentCol++;
        } else {
            currentRow = obstacleRow;
        }
        actions++;
    }

    actions += (H - currentRow) + (W - currentCol);
    cout << actions << endl;

    return 0;
}