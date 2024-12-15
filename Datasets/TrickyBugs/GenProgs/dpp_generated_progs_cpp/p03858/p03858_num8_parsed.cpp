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

    map<pair<int, int>, int> count;
    for (int i = 0; i < N; i++) {
        int dx = pinholes[i].first - pinholes[a-1].first;
        int dy = pinholes[i].second - pinholes[a-1].second;
        int dd = dx + dy;

        if (dx * (pinholes[b-1].second - pinholes[a-1].second) == dy * (pinholes[b-1].first - pinholes[a-1].first) && dd >= 0) {
            count[{dx, dy}]++;
        }
    }

    int result = 0;
    for (auto& pair : count) {
        result = max(result, pair.second);
    }

    cout << result << endl;

    return 0;
}