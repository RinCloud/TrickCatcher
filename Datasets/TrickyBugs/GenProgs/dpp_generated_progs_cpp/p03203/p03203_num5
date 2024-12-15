#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    int x = 1, y = 1;
    int actions = 0;

    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;

        // Calculate the distance between the current position to the obstacle
        int distX = X - x;
        int distY = Y - y;

        // Move the piece to the adjacent cell based on the distance
        if (distX > 0) {
            x++;
        } else if (distY > 0) {
            y++;
        }

        // Update actions performed
        actions++;
    }

    // Calculate remaining actions for Takahashi
    int remainingX = H - x;
    int remainingY = W - y;

    actions += min(remainingX, remainingY);

    cout << actions << endl;

    return 0;
}