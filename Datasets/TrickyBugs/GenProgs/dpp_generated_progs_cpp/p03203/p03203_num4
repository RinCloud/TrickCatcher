#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    unordered_set<int> obstacles;
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        obstacles.insert((X-1) * W + Y);
    }

    int x = 0, y = 0;
    int actions = 0;
    bool has_moved = true;

    while (x < H-1 || y < W-1) {
        int next_x = x + 1;
        int next_y = y + 1;

        if (next_x < H && obstacles.find(next_x * W + y) == obstacles.end()) {
            x = next_x;
            has_moved = true;
        } else if (next_y < W && obstacles.find(x * W + next_y) == obstacles.end()) {
            y = next_y;
            has_moved = true;
        } else {
            if (!has_moved) {
                break;
            }
            has_moved = false;
        }
        actions++;
    }

    cout << actions << endl;

    return 0;
}