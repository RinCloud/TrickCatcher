#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> X;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        X.push_back(x);
    }

    sort(X.begin(), X.end());

    vector<int> distances;
    for (int i = 0; i < M - 1; i++) {
        distances.push_back(abs(X[i + 1] - X[i]));
    }

    sort(distances.begin(), distances.end(), greater<int>());

    int total_moves = X[M - 1] - X[0];
    for (int i = 0; i < min(N - 1, M - 1); i++) {
        total_moves -= distances[i];
    }

    cout << total_moves << endl;

    return 0;
}