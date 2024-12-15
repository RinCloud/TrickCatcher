#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> s(M), c(M);
    for (int i = 0; i < M; i++) {
        cin >> s[i] >> c[i];
    }

    vector<int> num(N, -1);
    for (int i = 0; i < M; i++) {
        if (num[s[i] - 1] != -1 && num[s[i] - 1] != c[i]) {
            cout << -1 << endl;
            return 0;
        }
        num[s[i] - 1] = c[i];
    }

    if (N > 1 && num[0] == 0) {
        cout << -1 << endl;
        return 0;
    }

    if (N > 1 && num[0] == -1) {
        num[0] = 1;
    }

    for (int i = 0; i < N; i++) {
        if (num[i] == -1) {
            num[i] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << num[i];
    }
    cout << endl;

    return 0;
}