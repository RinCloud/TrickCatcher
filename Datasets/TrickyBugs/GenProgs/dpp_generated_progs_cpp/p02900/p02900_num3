#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long common_divisors = gcd(A, B);
    int count = 1;

    for (long long i = 2; i <= sqrt(common_divisors); i++) {
        if (common_divisors % i == 0) {
            count++;
            if (i != common_divisors / i)
                count++;
        }
    }

    cout << count << endl;

    return 0;
}