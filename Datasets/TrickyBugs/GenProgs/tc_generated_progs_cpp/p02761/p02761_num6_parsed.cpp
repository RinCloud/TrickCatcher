#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> kazu(n);
    int f = 0;
    int g = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            if (n > 1 && b == 0) {
                f = -1;
            } else {
                g = 1;
            }
        }
        if (kazu.at(a - 1) != 0 && kazu.at(a - 1) != b) {
            f = -1;
        } else {
            kazu.at(a - 1) = b;
        }
    }
    if (g == 0 && n != 1) {
        kazu.at(0) = 1;
    }
    if (f != 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << kazu.at(i);
        }
        cout << endl;
    }
}
