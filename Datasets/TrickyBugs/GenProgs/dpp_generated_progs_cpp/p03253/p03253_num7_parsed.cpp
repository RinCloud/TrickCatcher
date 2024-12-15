#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    // Initialize the count to 1
    long long count = 1;

    // Prime factorize M
    for (int i = 2; i * i <= M; i++) {
        if (M % i == 0) {
            int exponent = 0;
            while (M % i == 0) {
                exponent++;
                M /= i;
            }

            // Count the number of ways to choose the exponent + 1
            count = count * (exponent + 1) % MOD;
        }
    }

    // If M has a factor greater than sqrt(M), it is a prime number
    if (M > 1) {
        count = count * 2 % MOD;
    }

    cout << count << endl;

    return 0;
}