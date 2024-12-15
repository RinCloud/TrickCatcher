#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> towns(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        towns[i] = make_pair(x, y);
    }

    sort(towns.begin(), towns.end());

    int total_cost = 0;
    for (int i = 1; i < N; i++) {
        int x_diff = abs(towns[i].first - towns[i-1].first);
        int y_diff = abs(towns[i].second - towns[i-1].second);
        total_cost += min(x_diff, y_diff);
    }

    cout << total_cost << endl;

    return 0;
}