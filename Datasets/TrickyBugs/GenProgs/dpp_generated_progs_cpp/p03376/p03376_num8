#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    vector<int> m(N);
    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<int> c(N);
    c[0] = min(X / m[0], (int)1e9);
    for (int i = 1; i < N; i++) {
        int parent = p[i];
        int upper = c[parent] + D;
        c[i] = min(upper, (int)1e9);
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += c[i];
    }

    cout << ans << endl;

    return 0;
}