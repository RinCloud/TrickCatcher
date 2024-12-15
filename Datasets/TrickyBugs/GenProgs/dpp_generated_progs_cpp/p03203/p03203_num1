#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    // Read input
    int H, W, N;
    cin >> H >> W >> N;

    unordered_set<int> obstacles;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        obstacles.insert(x * W + y);
    }

    int x = 0, y = 0;
    int dx = 1, dy = 0;
    int actions = 0;

    // Check if (1, 1) is an obstacle
    if (obstacles.count(1 * W + 1)) {
        cout << "0" << endl;
        return 0;
    }

    while (true) {
        int nx = x + dx;
        int ny = y + dy;

        // Check if next cell is valid
        if (nx < 1 || nx > H || ny < 1 || ny > W || obstacles.count(nx * W + ny)) {
            break;
        }

        // Update position
        x = nx;
        y = ny;
        actions++;

        // Swap players
        swap(dx, dy);
        dy *= -1;
    }

    cout << actions << endl;

    return 0;
}