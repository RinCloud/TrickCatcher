#include"bits/stdc++.h"
using namespace std;

int divisors(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal, count only one
            if (n / i == i) {
                count++;
            } else { // Otherwise, count both divisors
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    
    int count = 0;
    for (int i = 1; i <= n; i += 2) {
        if (divisors(i) == 8) {
            count++;
        }
    }
    
    cout << count << "\n";
    
    return 0;
}
