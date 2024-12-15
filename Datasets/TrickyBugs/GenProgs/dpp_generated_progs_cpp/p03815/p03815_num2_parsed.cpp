#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long x;
    cin >> x;

    // If x is less than 7, minimum number of operations is 1 since the maximum score from one operation is 6
    if (x <= 6) {
        cout << "1" << endl;
    } else {
        // Since opposite sides of the die always add up to 7, the maximum score from two operations is 7
        // Therefore, the minimum number of operations needed to achieve x points is ceil(x/7)
        cout << ceil(x/7.0) << endl;
    }

    return 0;
}