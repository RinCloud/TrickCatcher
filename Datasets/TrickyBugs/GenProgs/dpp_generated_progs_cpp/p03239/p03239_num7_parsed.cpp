#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    int min_cost = INT_MAX;

    for(int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;

        if(t <= T) {
            min_cost = min(min_cost, c);
        }
    }

    if(min_cost == INT_MAX) {
        cout << "TLE" << endl;
    } else {
        cout << min_cost << endl;
    }

    return 0;
}