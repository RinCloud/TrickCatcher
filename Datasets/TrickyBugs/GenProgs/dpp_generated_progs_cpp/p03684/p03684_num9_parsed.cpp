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

    // Sort the towns based on their x-coordinates
    sort(towns.begin(), towns.end());

    int min_cost = 0;
    for (int i = 1; i < N; i++) {
        // Calculate the cost to build a road between adjacent towns
        min_cost += min(abs(towns[i].second - towns[i-1].second),
                        abs(towns[i].first - towns[i-1].first));
    }

    cout << min_cost << endl;

    return 0;
}