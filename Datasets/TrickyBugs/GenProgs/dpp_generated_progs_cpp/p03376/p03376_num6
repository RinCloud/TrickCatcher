#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    vector<int> m(N), p(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<int> c(N, 0);
    c[0] = X / m[0];

    for (int i = 1; i < N; i++) {
        int parent = p[i];
        c[i] = min(c[parent], c[parent] + D);
    }

    int totalDoughnuts = 0;
    for (int i = 0; i < N; i++) {
        totalDoughnuts += c[i];
    }

    cout << totalDoughnuts << endl;

    return 0;
}