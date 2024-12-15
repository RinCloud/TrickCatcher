#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A, B, C;
vector<int> lengths;

int solve(int a, int b, int c, int idx, int mp) {
    if (idx == N) {
        if (a == 0 || b == 0 || c == 0) {
            return 1e9;
        }
        return mp + abs(A - a) + abs(B - b) + abs(C - c) - 30;
    }
    
    int res = solve(a, b, c, idx + 1, mp);
    res = min(res, solve(a + lengths[idx], b, c, idx + 1, mp + (a > 0 ? 10 : 0)));
    res = min(res, solve(a, b + lengths[idx], c, idx + 1, mp + (b > 0 ? 10 : 0)));
    res = min(res, solve(a, b, c + lengths[idx], idx + 1, mp + (c > 0 ? 10 : 0)));
    
    return res;
}

int main() {
    cin >> N >> A >> B >> C;
    lengths.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> lengths[i];
    }
    
    int ans = solve(0, 0, 0, 0, 0);
    cout << ans << endl;
    
    return 0;
}