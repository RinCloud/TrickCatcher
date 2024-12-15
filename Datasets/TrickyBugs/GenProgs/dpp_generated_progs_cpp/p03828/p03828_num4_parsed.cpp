#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    // Factorize the number N!
    vector<int> factors(N + 1, 0);
    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j * j <= num; j++) {
            while (num % j == 0) {
                factors[j]++;
                num /= j;
            }
        }
        if (num > 1) {
            factors[num]++;
        }
    }

    // Calculate the number of divisors modulo 10^9+7
    long long divisors = 1;
    for (int i = 2; i <= N; i++) {
        divisors = (divisors * (factors[i] + 1)) % MOD;
    }

    cout << divisors << endl;
    return 0;
}