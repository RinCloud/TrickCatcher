#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long N;
    cin >> N;

    int count = 0;
    vector<int> primes;
    for (int i = 2; i <= sqrt(N); i++) {
        if (isPrime(i) && N % i == 0) {
            while (N % i == 0) {
                N /= i;
                count++;
            }
            primes.push_back(i);
        }
    }
    if (N > 1 || count == 0) {
        count++;
    }
    cout << count << endl;

    return 0;
}