#include <iostream>

using namespace std;

int findTrailingZeros(long long N) {
    int count = 0;
    
    // Divide N by powers of 5 and count the number of times it divides evenly
    for (long long i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }
    
    return count;
}

int main() {
    long long N;
    cin >> N;
    
    int trailingZeros = findTrailingZeros(N);
    
    cout << trailingZeros << endl;
    
    return 0;
}