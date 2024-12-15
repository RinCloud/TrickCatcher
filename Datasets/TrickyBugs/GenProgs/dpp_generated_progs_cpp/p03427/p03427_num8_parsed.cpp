#include <iostream>
#include <string>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(long long int num) {
    int sum = 0;

    // converting the number to string
    string str = to_string(num);

    // iterating through each digit
    for (char c : str) {
        // adding the digit to sum
        sum += c - '0';
    }

    return sum;
}

int main() {
    long long int N;
    cin >> N;

    // calculating the maximum possible sum of digits
    int maxSum = sumOfDigits(N);

    cout << maxSum << endl;

    return 0;
}