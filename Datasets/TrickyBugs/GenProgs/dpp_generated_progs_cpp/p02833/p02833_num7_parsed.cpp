#include <iostream>

using namespace std;

int countTrailingZeros(long long N) {
    int count = 0;
    for (long long i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }
    return count;
}

int main() {
    long long N;
    cin >> N;
    cout << countTrailingZeros(N) << endl;
    return 0;
}