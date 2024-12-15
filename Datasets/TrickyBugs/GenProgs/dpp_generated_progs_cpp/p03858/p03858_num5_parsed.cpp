#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;

    vector<pair<int, int>> pinholes(N);
    for (int i = 0; i < N; i++) {
        cin >> pinholes[i].first >> pinholes[i].second;
    }

    vector<int> distances;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dist = abs(pinholes[i].first - pinholes[j].first) + abs(pinholes[i].second - pinholes[j].second);
            distances.push_back(dist);
        }
    }

    sort(distances.begin(), distances.end());
    distances.erase(unique(distances.begin(), distances.end()), distances.end());

    int count = 0;
    for (int i = 0; i < distances.size(); i++) {
        if (distances[i] == distances[a - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}