#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M), b(M);
    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i];
    }

    unordered_set<int> connected;
    for (int i = 0; i < M; i++) {
        if (a[i] == 1) {
            connected.insert(b[i]);
        }
    }

    for (int i = 0; i < M; i++) {
        if (b[i] == N && connected.count(a[i]) > 0) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}