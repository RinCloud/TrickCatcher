#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long N;
    cin >> N;

    vector<int> primes;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    int cnt = 0;

    for (int i = primes.size() - 1; i >= 0; i--) {
        int p = primes[i];
        int e = 1;
        long long z = pow(p, e);
        while (N % z == 0) {
            e++;
            z = pow(p, e);
        }
        cnt++;
        N /= pow(p, e - 1);
    }

    cout << cnt << endl;

    return 0;
}