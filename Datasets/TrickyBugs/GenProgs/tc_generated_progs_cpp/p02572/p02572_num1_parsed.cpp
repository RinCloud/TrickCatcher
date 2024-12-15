#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long sum = 0;
    for (long long i = 0; i < n - 1; i++) {
        for (long long j = i + 1; j < n; j++) {
            long long product = (v[i] * v[j]) % (1000000007);
            sum += product;
            sum %= 1000000007;
        }
    }

    cout << sum;
    return 0;
}
