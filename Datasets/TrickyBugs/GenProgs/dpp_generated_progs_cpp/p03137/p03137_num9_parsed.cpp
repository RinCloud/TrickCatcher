#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> X(M);
    for (int i = 0; i < M; i++) {
        cin >> X[i];
    }
    sort(X.begin(), X.end());

    int min_moves = 0;
    vector<int> distances;

    if (N >= M) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i < M; i++) {
        distances.push_back(X[i] - X[i - 1]);
    }

    sort(distances.begin(), distances.end());

    for (int i = 0; i < M - N; i++) {
        min_moves += distances[i];
    }

    cout << min_moves << endl;

    return 0;
}