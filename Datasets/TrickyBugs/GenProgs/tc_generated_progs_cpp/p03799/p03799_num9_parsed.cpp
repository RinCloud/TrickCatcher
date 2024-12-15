#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long cnt = 0;

    if (n >= 2 * m) {
        cnt = m;
    } else {
        cnt = n + (m - n / 2) / 2;
    }

    cout << cnt << endl;

    return 0;
}
