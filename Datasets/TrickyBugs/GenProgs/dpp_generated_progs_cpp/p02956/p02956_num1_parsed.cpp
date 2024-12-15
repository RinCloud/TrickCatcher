#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    vector<long long> count_x(N);
    vector<long long> count_y(N);

    for (int i = 1; i < N; i++) {
        count_x[i] = (count_x[i-1] + i*(long long)(x[i]-x[i-1])) % MOD;
        count_y[i] = (count_y[i-1] + i*(long long)(y[i]-y[i-1])) % MOD;
    }

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        long long rect_count = ((count_x[N-1] - count_x[i]) + (count_y[N-1] - count_y[i]) + 2) % MOD;
        sum = (sum + rect_count) % MOD;
    }

    cout << sum << endl;

    return 0;
}