#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
typedef vector<int> vi;
int n, a, b, c;
vi bamboos;

int dfs(int cur, int A, int B, int C) {
    if (cur == n) {
        if (A == 0 || B == 0 || C == 0) return INT_MAX;
        return abs(A - a) + abs(B - b) + abs(C - c) - 30;
    }
    int ret = dfs(cur + 1, A, B, C);
    ret = min(ret, dfs(cur + 1, A + bamboos[cur], B, C) + 10);
    ret = min(ret, dfs(cur + 1, A, B + bamboos[cur], C) + 10);
    ret = min(ret, dfs(cur + 1, A, B, C + bamboos[cur]) + 10);
    return ret;
}

int main() {
    cin >> n >> a >> b >> c;
    bamboos.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> bamboos[i];
    }
    cout << dfs(0, 0, 0, 0) << endl;
    return 0;
}