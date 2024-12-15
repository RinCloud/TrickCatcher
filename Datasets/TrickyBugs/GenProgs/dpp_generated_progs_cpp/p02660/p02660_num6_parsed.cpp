#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

long long maxOperations(long long N) {
    vector<long long> factors;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            factors.push_back(i);
            while (N % i == 0) {
                N /= i;
            }
        }
    }
    if (N > 1)
        factors.push_back(N);
    
    int count = 0;
    long long prev = -1;
    for (auto factor : factors) {
        if (isPrime(factor) && factor != prev) {
            count++;
            prev = factor;
        }
    }
    return count;
}

int main() {
    long long N;
    cin >> N;
    cout << maxOperations(N) << endl;
    return 0;
}