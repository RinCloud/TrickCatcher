#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;

    vector<pair<int, int>> pinholes(N);
    for (int i = 0; i < N; i++) {
        cin >> pinholes[i].first >> pinholes[i].second;
    }

    // Count the number of pairs of pinholes that can be pointed by the compass
    map<pair<int, int>, int> compassPairs;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int distance = abs(pinholes[i].first - pinholes[j].first) + abs(pinholes[i].second - pinholes[j].second);
            compassPairs[{distance, i}]++;
            compassPairs[{distance, j}]++;
        }
    }

    int countPairs = compassPairs[{abs(pinholes[a - 1].first - pinholes[b - 1].first) + abs(pinholes[a - 1].second - pinholes[b - 1].second), a - 1}];
    cout << countPairs << endl;

    return 0;
}