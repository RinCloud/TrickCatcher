#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> a(M);
    vector<int> b(M);

    for (int i = 0; i < M; i++) {
        cin >> a[i] >> b[i];
    }

    unordered_set<int> directDest;
    unordered_set<int> viaDest;

    for (int i = 0; i < M; i++) {
        if (a[i] == 1) {
            directDest.insert(b[i]);
        } else if (b[i] == N) {
            viaDest.insert(a[i]);
        }
    }

    for (auto dest : directDest) {
        if (viaDest.count(dest) > 0) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}