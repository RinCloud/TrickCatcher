#include <iostream>
using namespace std;

long long int power(long long int a, long long int b, long long int mod) {
    long long int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

int main() {
    long long int N, K;
    cin >> N >> K;

    if (N == 1) {
        cout << K << endl;
    } else if (N == 2) {
        cout << K * (K - 1) % 1000000007 << endl;
    } else {
        cout << K * (K - 1) % 1000000007 * power(K - 2, N - 2, 1000000007) % 1000000007 << endl;
    }
    return 0;
}