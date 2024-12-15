#include<bits/stdc++.h>
using namespace std;
#define SIZE 200010

vector<vector<int>> pos;

int main() {
    int N, K;
    cin >> N >> K;
    pos.resize(N + 1);
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }

    vector<int> s;
    for (int i = 1; i <= N; i++) {
        if (pos[i].empty()) continue;
        int last = pos[i][0];
        s.push_back(i);
        for (int j = 1; j < pos[i].size(); j++) {
            if (pos[i][j] != last + 1) {
                last = pos[i][j];
                s.push_back(i);
            } else {
                last++;
            }
        }
    }

    for (int i = 0; i < min(K, (int)s.size()); i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}
