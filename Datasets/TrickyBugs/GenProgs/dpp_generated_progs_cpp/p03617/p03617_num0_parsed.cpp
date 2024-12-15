#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long Q, H, S, D;
    cin >> Q >> H >> S >> D;
    long long N;
    cin >> N;

    long long min_cost = min({4 * Q, 2 * H, S});
    min_cost = min(min_cost, 2 * min({Q, 2 * H, D}));

    long long cost = (N / 2) * min_cost;
    if (N % 2 == 1) {
        cost += min_cost / 2;
    }

    cout << cost << endl;
    return 0;
}