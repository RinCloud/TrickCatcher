#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Read the input number N
    long long N;
    cin >> N;
    
    // Calculate the maximum possible sum of digits
    long long sum = 0;
    long long temp = N;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    // Print the result
    cout << sum << endl;
    
    return 0;
}