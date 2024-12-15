#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    int minCost = INT_MAX;
    for (int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;
        if (t <= T) {
            minCost = min(minCost, c);
        }
    }
    if (minCost == INT_MAX) {
        cout << "TLE" << endl;
    } else {
        cout << minCost << endl;
    }
    return 0;
}