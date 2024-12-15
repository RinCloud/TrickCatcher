#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& balls, int k) {
    int n = balls.size();
    int max_ball = *max_element(balls.begin(), balls.end());

    if (k > max_ball) {
        return false;
    }

    if (n == 1) {
        return balls[0] == k;
    }

    int gcd = balls[0];
    for (int i = 1; i < n; i++) {
        gcd = __gcd(gcd, balls[i]);
    }

    return (max_ball - k) % gcd == 0;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> balls(n);
    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    if (isPossible(balls, k)) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}