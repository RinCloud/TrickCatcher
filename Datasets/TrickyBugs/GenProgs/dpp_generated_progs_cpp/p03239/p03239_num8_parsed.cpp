#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<pair<int, int>> routes(N);
    for (int i = 0; i < N; i++) {
        cin >> routes[i].first >> routes[i].second;
    }

    sort(routes.begin(), routes.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    int minCost = -1;
    for (int i = 0; i < N; i++) {
        if (routes[i].second <= T) {
            minCost = routes[i].first;
            break;
        }
    }

    if (minCost == -1) {
        cout << "TLE" << endl;
    } else {
        cout << minCost << endl;
    }

    return 0;
}