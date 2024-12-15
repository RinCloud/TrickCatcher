#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<bool>> obstacles(H + 1, vector<bool>(W + 1, false));
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        obstacles[X][Y] = true;
    }

    int actions = 0;
    int x = 1, y = 1;
    while (true) {
        if (x == H && y == W)
            break;

        if (x < H && !obstacles[x + 1][y]) {
            x++;
            actions++;
        } else if (y < W && !obstacles[x][y + 1]) {
            y++;
            actions++;
        } else {
            break;
        }
    }

    cout << actions << endl;

    return 0;
}
