#include <iostream>

using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    // Initialize the white rectangle area
    int whiteArea = W * H;

    // Store the coordinates and actions
    int x[N], y[N], a[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }

    // Iterate through each point
    for (int i = 0; i < N; i++) {
        // Adjust the white area based on the action
        switch (a[i]) {
            case 1:
                whiteArea -= x[i] * H;
                break;
            case 2:
                whiteArea -= (W - x[i]) * H;
                break;
            case 3:
                whiteArea -= W * y[i];
                break;
            case 4:
                whiteArea -= W * (H - y[i]);
                break;
        }
    }

    cout << whiteArea << endl;

    return 0;
}
