#include<bits/stdc++.h>
using namespace std;

const int MAXN = 105;
int H, W;
char a[MAXN][MAXN];

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> a[i][j];
        }
    }

    int Sx, Sy, Tx, Ty;
    int S = 0, T = 0;
    int o = 0;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (a[i][j] == 'S') {
                Sx = i;
                Sy = j;
                S++;
            }
            if (a[i][j] == 'T') {
                Tx = i;
                Ty = j;
                T++;
            }
            if (a[i][j] == 'o') {
                o++;
            }
        }
    }

    if (S == 0 || T == 0) {
        cout << -1;
        return 0;
    }

    if (Sx == Tx || Sy == Ty) {
        cout << 0;
        return 0;
    }

    if (Sx > Tx) swap(Sx, Tx);
    if (Sy > Ty) swap(Sy, Ty);

    vector<pair<int, int>> HLeaves;
    vector<pair<int, int>> VLeaves;
    for (int i = Sx + 1; i <= Tx; i++) {
        if (a[i][Sy] == 'o') {
            HLeaves.push_back({i, Sy});
        }
    }

    for (int i = Sy + 1; i <= Ty; i++) {
        if (a[Sx][i] == 'o') {
            VLeaves.push_back({Sx, i});
        }
    }

    int ans = HLeaves.size() + VLeaves.size();
    if (HLeaves.empty() && VLeaves.empty()) {
        cout << ans;
        return 0;
    }

    int flag = 0;
    for (auto l1 : HLeaves) {
        for (auto l2 : VLeaves) {
            if (a[l1.first][l2.second] == 'o') {
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    if (flag) {
        cout << ans + 1;
    } else {
        cout << -1;
    }

    return 0;
}