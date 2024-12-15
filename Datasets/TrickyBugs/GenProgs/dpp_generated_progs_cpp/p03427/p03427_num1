#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string N;
    cin >> N;
    
    int sumOfDigits = 0;
    int numDigits = N.size();
    
    // Calculate the sum of digits for numbers less than 10^numDigits - 1
    for (int i = 1; i < numDigits; i++) {
        sumOfDigits += 9 * i * pow(10, i-1);
    }
    
    // Calculate the sum of digits for the remaining numbers
    int lastDigit = N[0] - '0';
    for (int i = 1; i <= lastDigit; i++) {
        sumOfDigits += i;
    }
    
    cout << sumOfDigits << endl;

    return 0;
}