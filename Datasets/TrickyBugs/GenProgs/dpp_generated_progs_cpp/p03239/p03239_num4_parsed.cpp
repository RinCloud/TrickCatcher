#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    int smallest_cost = INT_MAX;
    for (int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;
        if (t <= T) {
            smallest_cost = min(smallest_cost, c);
        }
    }

    if (smallest_cost == INT_MAX) {
        cout << "TLE" << endl;
    } else {
        cout << smallest_cost << endl;
    }

    return 0;
}