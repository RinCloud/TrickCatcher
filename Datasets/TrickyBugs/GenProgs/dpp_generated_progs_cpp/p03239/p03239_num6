#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<pair<int, int>> routes(N);
    for (int i = 0; i < N; i++) {
        cin >> routes[i].first >> routes[i].second;
    }

    int min_cost = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (routes[i].second <= T) {
            min_cost = min(min_cost, routes[i].first);
        }
    }

    if (min_cost == INT_MAX) {
        cout << "TLE" << endl;
    } else {
        cout << min_cost << endl;
    }

    return 0;
}