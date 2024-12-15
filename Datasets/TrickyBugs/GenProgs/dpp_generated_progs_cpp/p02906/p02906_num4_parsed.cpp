#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<int>> G(N, vector<int>(N, 0));

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        G[A][B] = 1;
        G[B][A] = 1;
    }

    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        queries[i] = {A, B};
    }

    for (int i = 0; i < Q; i++) {
        unordered_set<int> visited;
        int A = queries[i].first;
        int B = queries[i].second;
        visited.insert(A);

        bool found = false;
        for (int j = 0; j < N; j++) {
            if (G[A][j] == 1 && G[B][j] == 1 && visited.find(j) == visited.end()) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}