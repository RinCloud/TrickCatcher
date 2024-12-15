#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool is_possible(int x, int v, int d) {
    if (d > v) {
        return false;
    }
    int rem = v - d;
    if (rem % 2 == 0) {
        return true;
    } else {
        return (x % 2 == 0);
    }
}

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    vector<int> a(N), b(N);
    a[0] = V;
    for (int i = 1; i < N; i++) {
        if (x[i] - x[i - 1] > a[i - 1]) {
            a[i] = 0;
        } else {
            a[i] = a[i - 1] - (x[i] - x[i - 1]);
        }
    }
    b[N - 1] = V;
    for (int i = N - 2; i >= 0; i--) {
        if (x[i + 1] - x[i] > b[i + 1]) {
            b[i] = 0;
        } else {
            b[i] = b[i + 1] - (x[i + 1] - x[i]);
        }
    }
    for (int i = 0; i < N; i++) {
        if (is_possible(x[i], a[i] / 2 + b[i] / 2 + min(a[i] % 2, b[i] % 2), x[i] - x[0]) || is_possible(x[i], V - a[i] / 2 - b[i] / 2 - min(a[i] % 2, b[i] % 2), x[N - 1] - x[i])) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}