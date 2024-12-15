#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> flags(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        flags[i] = make_pair(x, y);
    }

    sort(flags.begin(), flags.end());

    int max_distance = 0;
    for (int i = 1; i < N; i++) {
        int distance = flags[i].first - flags[i-1].first;
        max_distance = max(max_distance, distance);
    }

    cout << max_distance << endl;

    return 0;
}