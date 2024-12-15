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
        ans = min(ans, min(H % 3, W % 3));
        ans = min(ans, min(3 - H % 3, 3 - W % 3));
    }

    cout << ans << endl;

    return 0;
}