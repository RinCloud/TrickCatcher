#include <iostream>
#include <vector>

using namespace std;

vector<int> primes(10000001, 0);

void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 3; i <= n; i += 2) {
        primes[i] = primes[i - 1] + (isPrime[i] ? 1 : 0);
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    sieveOfEratosthenes(10000000);

    int operations = 0;
    for (int i = 2; i <= 10000000 && !x.empty(); i++) {
        if (primes[i] > 0 && x[0] <= i) {
            operations++;
            int j = x[0] - 1;
            while (j < 10000001 && !x.empty() && x[0] <= j + 1) {
                x.erase(x.begin());
                j++;
            }
        }
    }

    cout << operations << endl;

    return 0;
}
