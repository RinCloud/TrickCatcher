#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    long long N;
    cin >> N;

    // Find the maximum possible sum of the digits
    long long sum = 0;
    while (N > 0) {
        sum += N % 10; 
        N /= 10; 
    }
    
    // Print the result
    cout << sum << endl;

    return 0;
}