#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    // Read input
    long long L, R;
    cin >> L >> R;
    
    // Initialize count
    long long count = 0;

    // Loop through each x from L to R
    for (long long x = L; x <= R; x++) {
        // Loop through each y from x to R
        for (long long y = x; y <= R; y++) {
            // Check if remainder of y divided by x is equal to y XOR x
            if (y % x == (y ^ x)) {
                count++;
            }
        }
    }

    // Print the number of pairs modulo MOD
    cout << count % MOD << endl;

    return 0;
}