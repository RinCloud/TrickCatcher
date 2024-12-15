#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << 0 << endl;
        return 0;
    }

    // Calculate the absolute difference between x and y
    int diff = abs(y - x);

    // If the signs are different, we need to reverse the sign and increment the value by 1
    // So, we need to press the buttons (diff / 2) times to reverse the sign and (diff % 2) times to increment the value by 1
    if ((x < 0 && y > 0) || (x > 0 && y < 0)) {
        cout << diff / 2 + diff % 2 << endl;
    }
    // If the signs are same, we need to increment the value by 1
    // So, we need to press the buttons diff times to increment the value by 1
    else {
        cout << diff << endl;
    }

    return 0;
}