#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> primes(N + 1, 0);
    for (int i = 2; i <= N; i++) {
        int temp = i;
        for (int j = 2; j <= temp; j++) {
            while (temp % j == 0) {
                primes[j]++;
                temp /= j;
            }
        }
    }

    long long divisors = 1;
    for (int i = 2; i <= N; i++) {
        if (primes[i] != 0) {
            divisors = (divisors * (primes[i] + 1)) % MOD;
        }
    }

    cout << divisors << endl;

    return 0;
}