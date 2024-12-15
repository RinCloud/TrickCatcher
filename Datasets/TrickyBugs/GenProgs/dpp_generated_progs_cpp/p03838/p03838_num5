#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int ans = 0;
    if (abs(x) < abs(y)) {
        ans += abs(y) - abs(x); // Button A needs to be pressed to reach y
        if (x < 0) { // Button B needs to be pressed to change the sign of x
            ans++;
            x = -x;
        }
        if (x != y) { // Button A needs to be pressed to reach y
            ans++;
        }
    } else if (abs(x) > abs(y)) {
        ans += abs(x) - abs(y); // Button A needs to be pressed to reach y
        if (x > 0) { // Button B needs to be pressed to change the sign of x
            ans++;
            x = -x;
        }
        if (x != y) { // Button A needs to be pressed to reach y
            ans++;
        }
    } else { // abs(x) = abs(y)
        if (x < 0 && y > 0) { // Button A and B needs to be pressed to change the sign of x and reach y
            ans += 2;
            x = -x;
        }
        if (x > 0 && y < 0) { // Button A and B needs to be pressed to change the sign of x and reach y
            ans += 2;
            x = -x;
        }
        if (x != y) { // Button A needs to be pressed to reach y
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}