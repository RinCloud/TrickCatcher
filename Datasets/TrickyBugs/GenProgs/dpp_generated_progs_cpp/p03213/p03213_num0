#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<bool> isPrime(N + 1, true);
    
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    int answer = 0;
    for (int prime : primes) {
        int count = 0;
        int num = prime;
        while (num <= N) {
            count += N / num;
            num *= prime;
        }
        if (count >= 75) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}