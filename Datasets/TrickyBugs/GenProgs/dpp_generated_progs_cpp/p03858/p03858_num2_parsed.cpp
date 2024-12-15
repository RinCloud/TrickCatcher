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

    sort(pinholes.begin(), pinholes.end());

    vector<int> distances;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dx = abs(pinholes[i].first - pinholes[j].first);
            int dy = abs(pinholes[i].second - pinholes[j].second);
            distances.push_back(dx + dy);
        }
    }

    sort(distances.begin(), distances.end());

    int pairCount = 0;
    for (int i = 0; i < distances.size(); i++) {
        int count = upper_bound(distances.begin(), distances.end(), distances[i]) -
                    lower_bound(distances.begin(), distances.end(), distances[i]);

        if (distances[i] == abs(pinholes[a-1].first - pinholes[b-1].first) +
                             abs(pinholes[a-1].second - pinholes[b-1].second)) {
            count--;
        }
        
        pairCount += count * (count + 1) / 2;
        i += count - 1;
    }

    cout << pairCount << endl;

    return 0;
}