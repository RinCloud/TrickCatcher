#include <iostream>

using namespace std;

long long countTrailingZeros(long long n) {
    long long zeros = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        zeros += n / i;
    }
    return zeros;
}

int main() {
    long long N;
    cin >> N;

    long long result = countTrailingZeros(N);
    cout << result << endl;

    return 0;
}
