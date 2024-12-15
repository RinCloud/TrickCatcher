#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, K, Q;
    cin >> X >> K;
    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }

    cin >> Q;
    while (Q--) {
        int t, a;
        cin >> t >> a;
        int upper_bulb = ((t/r[K-1])%2 == 0) ? 0 : 1;
        for (int i = 0; i < K; i++) {
            if (t < r[i]) break;
            upper_bulb ^= 1;
        }
        int sand_in_A;
        if (upper_bulb == 0) {
            sand_in_A = a;
        } else {
            sand_in_A = X - a;
        }
        cout << sand_in_A << endl;
    }

    return 0;
}