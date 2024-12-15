#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> b(N), l(N), u(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }

    long long left = 0, right = 1LL << 32;
    while (left < right) {
        long long mid = (left + right) / 2;
        long long A = 0, B = 0;
        for (int i = 0; i < N; i++) {
            if (b[i] + mid * X >= u[i]) {
                A += u[i] * l[i];
                B += u[i] * l[i];
            } else if (b[i] + mid * X >= l[i]) {
                A += (b[i] + mid * X) * l[i];
                B += u[i] * l[i];
            } else {
                A += l[i] * l[i];
                B += u[i] * l[i];
            }
        }
        if (A >= B) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << left * X << endl;

    return 0;
}