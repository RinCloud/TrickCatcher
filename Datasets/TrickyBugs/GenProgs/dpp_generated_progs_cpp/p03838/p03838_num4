#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int ans = 0;

    if (abs(y) > abs(x)) {
        ans += abs(y) - abs(x);
        x = y > 0 ? abs(y) : -abs(y);
    }

    ans += abs(abs(x) - abs(y));

    if (x < y) {
        if (x < 0 && y > 0) {
            ans += 2;
        } else {
            ans += 1;
        }
    } else if (x > y) {
        if (x > 0 && y < 0) {
            ans += 2;
        } else {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}