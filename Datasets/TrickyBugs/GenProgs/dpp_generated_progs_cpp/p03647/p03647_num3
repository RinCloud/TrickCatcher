#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> services(M);
    unordered_set<int> islands;

    for (int i = 0; i < M; i++) {
        cin >> services[i].first >> services[i].second;
        islands.insert(services[i].first);
        islands.insert(services[i].second);
    }

    for (int i = 0; i < M; i++) {
        if (services[i].first == 1 && islands.count(services[i].second) > 0) {
            cout << "POSSIBLE" << endl;
            return 0;
        }

        if (services[i].second == N && islands.count(services[i].first) > 0) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}