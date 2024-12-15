#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;

    vector<pair<int, int>> pinholes(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        pinholes[i] = make_pair(x, y);
    }

    vector<int> distances;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dist = abs(pinholes[i].first - pinholes[j].first) +
                       abs(pinholes[i].second - pinholes[j].second);
            distances.push_back(dist);
        }
    }

    sort(distances.begin(), distances.end());

    vector<pair<int, int>> counts(1);
    counts[0] = make_pair(distances[0], 1);
    for (int i = 1; i < distances.size(); i++) {
        if (distances[i] == counts.back().first) {
            counts.back().second++;
        } else {
            counts.push_back(make_pair(distances[i], 1));
        }
    }

    int result = counts[0].second;
    int total_count = counts[0].second;
    for (int i = 1; i < counts.size(); i++) {
        result += counts[i].second * total_count;
        total_count += counts[i].second;
    }

    cout << result << endl;

    return 0;
}