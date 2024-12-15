#include <iostream>

using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    int minX = 0, minY = 0, maxX = W, maxY = H;

    for (int i = 0; i < N; i++) {
        int x, y, a;
        cin >> x >> y >> a;

        if (a == 1) {
            minX = max(minX, x);
        } else if (a == 2) {
            maxX = min(maxX, x);
        } else if (a == 3) {
            minY = max(minY, y);
        } else if (a == 4) {
            maxY = min(maxY, y);
        }
    }

    int whiteArea = max(0, maxX - minX) * max(0, maxY - minY);
    cout << whiteArea << endl;

    return 0;
}