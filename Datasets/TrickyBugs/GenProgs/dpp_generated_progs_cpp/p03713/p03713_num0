#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int ans = min(H, W);

    if (H % 3 == 0 || W % 3 == 0) {
        ans = 0;
    } else {
        for (int i = 1; i < H; i++) {
            int S1 = i * W;
            int S2 = (H - i) * (W / 2);
            int S3 = (H - i) * ((W + 1) / 2);
            ans = min(ans, max(S1, max(S2, S3)) - min(S1, min(S2, S3)));
        }

        for (int i = 1; i < W; i++) {
            int S1 = i * H;
            int S2 = (W - i) * (H / 2);
            int S3 = (W - i) * ((H + 1) / 2);
            ans = min(ans, max(S1, max(S2, S3)) - min(S1, min(S2, S3)));
        }
    }

    cout << ans << endl;

    return 0;
}