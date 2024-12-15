#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    int N, T;
    cin >> N >> T;

    vector<pair<int, int>> routes(N);
    for (int i = 0; i < N; i++) {
        cin >> routes[i].first >> routes[i].second;
    }

    sort(routes.begin(), routes.end(), compare);

    int minCost = 1001;
    for (int i = 0; i < N; i++) {
        if (routes[i].second <= T) {
            minCost = min(minCost, routes[i].first);
        }
    }

    if (minCost == 1001) {
        cout << "TLE" << endl;
    } else {
        cout << minCost << endl;
    }

    return 0;
}