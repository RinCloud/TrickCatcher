#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    // Compute the factorial of N
    long long fact = 1;
    for (int i = 1; i <= N; i++) {
        fact = (fact * i) % MOD;
    }
    
    // Compute the number of divisors
    int divisors = 1;
    for (int i = 2; i * i <= fact; i++) {
        int count = 0;
        while (fact % i == 0) {
            count++;
            fact /= i;
        }
        divisors = (divisors * (count + 1)) % MOD;
    }
    if (fact > 1) {
        divisors = (divisors * 2) % MOD;
    }
    
    cout << divisors << endl;
    
    return 0;
}