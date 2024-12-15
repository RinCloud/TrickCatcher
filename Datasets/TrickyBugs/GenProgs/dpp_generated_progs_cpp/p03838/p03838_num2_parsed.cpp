#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // Calculate the absolute difference between x and y
    int diff = abs(x - y);

    // Calculate the minimum number of button presses required
    int count = 0;

    // Increment count if the difference is odd
    count += (diff % 2);

    // If the sign of x is different from y, increment count by 2
    if ((x < 0 && y > 0) || (x > 0 && y < 0)) {
        count += 2;
    }

    // Print the minimum number of button presses required
    cout << count << endl;

    return 0;
}