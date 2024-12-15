#include<iostream>

using namespace std;

const int maxn = 100010;
int n, m, a[maxn];

int main() {
    int X;
    cin >> X >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int L, R = X;
    int t = 0, k = 0, s = -1, x = 0;
    int time, A;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> time >> A;
        while (k < n && a[k + 1] <= time) {
            int dif = s * (a[k + 1] - t);
            L = max(0, min(X, L + dif));
            R = max(0, min(X, R + dif));
            s *= -1;
            x += dif;
            t = a[k + 1];
            k++;
        }
        int T = time - t;
        A = max(0, min(X, A + x));
        A = max(0, min(X, A + s * T));
        cout << A << endl;
    }
    return 0;
}
