#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int diff = abs(x - y);
    int count = diff;

    if (x > y) {
        if ((x - y) % 2 == 0) {
            count = fmin((x + y) / 2, 2 + (x + y) / 2);
        } else {
            count = fmin((x + y + 1) / 2, 1 + (x + y + 1) / 2);
        }
    } else {
        if (diff % 2 == 0) {
            count = fmin((2 * diff - y + x) / 2, 1 + (2 * diff - y + x) / 2);
        } else {
            count = fmin((y - x) / 2, 1 + (y - x) / 2);
        }
    }

    cout << count << endl;

    return 0;
}