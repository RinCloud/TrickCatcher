#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;

    int minTime = min(P + Q, min(Q + R, R + P));
    cout << minTime << endl;

    return 0;
}