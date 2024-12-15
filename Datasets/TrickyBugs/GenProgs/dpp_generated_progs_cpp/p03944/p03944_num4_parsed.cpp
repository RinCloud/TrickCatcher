#include <iostream>
using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    int x[N], y[N], a[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }

    int minX = 0, minY = 0, maxX = W, maxY = H;
    for (int i = 0; i < N; i++) {
        if (a[i] == 1) {
            minX = max(minX, x[i]);
        } else if (a[i] == 2) {
            maxX = min(maxX, x[i]);
        } else if (a[i] == 3) {
            minY = max(minY, y[i]);
        } else if (a[i] == 4) {
            maxY = min(maxY, y[i]);
        }
    }

    int whiteArea = max(0, maxX - minX) * max(0, maxY - minY);
    cout << whiteArea << endl;

    return 0;
}