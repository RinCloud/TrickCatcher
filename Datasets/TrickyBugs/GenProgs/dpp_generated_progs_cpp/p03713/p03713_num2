#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int ans = min(abs(H - W), min(H % 3, W % 3));
    if (H % 3 == 1 && W % 3 == 2) {
        ans = min(ans, 1);
    }
    if (H % 3 == 2 && W % 3 == 1) {
        ans = min(ans, 1);
    }
    if (H % 3 == 0 && W % 3 == 2) {
        ans = min(ans, 2);
    }
    if (H % 3 == 2 && W % 3 == 0) {
        ans = min(ans, 2);
    }
    if (H % 3 == 0 && W % 3 == 1) {
        ans = min(ans, 1);
    }
    if (H % 3 == 1 && W % 3 == 0) {
        ans = min(ans, 1);
    }

    cout << ans << endl;

    return 0;
}