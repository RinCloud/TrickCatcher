#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> islands(N + 1);
    unordered_set<int> reachable;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        islands[a].push_back(b);
        islands[b].push_back(a);
    }

    for (int i = 0; i < islands[1].size(); i++) {
        int island1 = islands[1][i];
        reachable.insert(island1);

        for (int j = 0; j < islands[island1].size(); j++) {
            int island2 = islands[island1][j];
            reachable.insert(island2);
        }
    }

    if (reachable.count(N)) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}