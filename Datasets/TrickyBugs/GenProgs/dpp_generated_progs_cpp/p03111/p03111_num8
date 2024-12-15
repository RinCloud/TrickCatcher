#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A, B, C;
vector<int> lengths;
int min_magic = 1000000000;

void solve(int idx, int a, int b, int c, int mp) {
    if (idx == N) {
        if (a > 0 && b > 0 && c > 0) {
            int total_magic = abs(a - A) + abs(b - B) + abs(c - C) + mp;
            min_magic = min(min_magic, total_magic);
        }
        return;
    }

    solve(idx + 1, a, b, c, mp);
    solve(idx + 1, a + lengths[idx], b, c, mp + 1);
    solve(idx + 1, a, b + lengths[idx], c, mp + 1);
    solve(idx + 1, a, b, c + lengths[idx], mp + 1);
}

int main() {
    cin >> N >> A >> B >> C;

    for (int i = 0; i < N; i++) {
        int length;
        cin >> length;
        lengths.push_back(length);
    }

    solve(0, 0, 0, 0, 0);

    cout << min_magic << endl;

    return 0;
}