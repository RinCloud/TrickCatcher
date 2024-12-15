#include"bits/stdc++.h"
using namespace std;

bool isOddWithEightDivisors(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            
            // Check the second divisor
            if (num / i != i)
                count++;
            
            // If the number has more than 8 divisors, return false
            if (count > 8)
                return false;
        }
    }
    
    // If the number has exactly 8 divisors and is odd, return true
    return (count == 8 && num % 2 != 0);
}

int main() {
    int n, s=0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isOddWithEightDivisors(i))
            s++;
    }

    cout << s << "\n";
}
