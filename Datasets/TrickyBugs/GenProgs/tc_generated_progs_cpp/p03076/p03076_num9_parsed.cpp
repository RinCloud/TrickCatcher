#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    int ans = 1000000;
    for (int i = 0; i < 5; i++) {
        int t = 0;
        for (int j = 0; j < 5; j++) {
            if (j == i) {
                t += (a + b + c + d + e + 9) / 10 * 10;
            } else if (j < i) {
                t += (a + 9) / 10 * 10;
            } else if (j == i + 1) {
                t += (b + 9) / 10 * 10;
            } else if (j == i + 2) {
                t += (c + 9) / 10 * 10;
            } else if (j == i + 3) {
                t += (d + 9) / 10 * 10;
            } else if (j == i + 4) {
                t += (e + 9) / 10 * 10;
            }
        }
        ans = min(ans, t);
    }
    
    cout << ans << endl;
    return 0;
}
