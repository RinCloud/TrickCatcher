#include <iostream>
using namespace std;

unsigned long long countZeros(unsigned long long n) {
    unsigned long long count = 0;
    for (unsigned long long i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    unsigned long long N;
    cin >> N;
    unsigned long long result = countZeros(N);
    cout << result << endl;
    return 0;
}