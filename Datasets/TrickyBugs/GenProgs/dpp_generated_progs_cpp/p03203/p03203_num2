#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read input
    int H, W, N;
    cin >> H >> W >> N;
    vector<pair<int, int>> obstacles(N);
    for (int i = 0; i < N; i++) {
        cin >> obstacles[i].first >> obstacles[i].second;
    }

    // Append (1, 1) to the obstacles vector
    obstacles.push_back({1, 1});

    // Sort the obstacles vector
    sort(obstacles.begin(), obstacles.end());

    // Calculate the longest path to each obstacle
    int longest_path = 0;
    for (int i = 0; i < N+1; i++) {
        int x_diff = obstacles[i].first - obstacles[i-1].first;
        int y_diff = obstacles[i].second - obstacles[i-1].second;
        longest_path = max(longest_path, min(x_diff, y_diff));
    }

    // Calculate the number of actions Takahashi will perform
    int actions = 0;
    while (longest_path > 0) {
        actions += (longest_path + (H-1)) / H;
        longest_path = (longest_path + (H-1)) % H;
    }

    // Print the result
    cout << actions << endl;

    return 0;
}