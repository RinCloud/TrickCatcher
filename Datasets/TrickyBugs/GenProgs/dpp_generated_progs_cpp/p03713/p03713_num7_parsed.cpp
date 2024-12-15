#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    int ans = H * (W / 3);
    
    if (W % 3 == 0) {
        cout << 0 << endl;
    } else {
        ans = max(ans, H * ((W / 3) + 1));
        ans = max(ans, (H / 2) * W);
        ans = max(ans, ((H + 1) / 2) * W);
        
        cout << (H * W) - ans << endl;
    }
    
    return 0;
}