#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    // Divide the bar into three equal parts
    int ans = min(H % 3, W % 3);

    // Divide the bar into two parts
    if (H >= 2) {
        ans = min(ans, W);
    }
    if (W >= 2) {
        ans = min(ans, H);
    }

    // Divide the bar into three parts with different sizes
    if (H >= 3 && W >= 2) {
        ans = min(ans, W / 2);
    }
    if (H >= 3 && W >= 2) {
        ans = min(ans, H / 3);
    }
    if (H >= 2 && W >= 3) {
        ans = min(ans, H / 2);
    }
    if (H >= 2 && W >= 3) {
        ans = min(ans, W / 3);
    }

    cout << ans << endl;
    
    return 0;
}