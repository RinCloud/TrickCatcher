#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }

    sort(balls.begin(), balls.end());

    int gcd_val = balls[0];
    for (int i = 1; i < N; i++) {
        gcd_val = __gcd(gcd_val, balls[i]);
    }

    if (K % gcd_val == 0 && K <= balls[N - 1]) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}