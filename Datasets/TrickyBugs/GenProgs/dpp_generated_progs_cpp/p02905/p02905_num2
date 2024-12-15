#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate gcd of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate lcm of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the sum of lcm of all pairs in the sequence
int sumOfLcm(vector<int>& sequence) {
    int n = sequence.size();
    int mod = 998244353;
    long long sum = 0;

    // Calculate the sum of lcm for all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int pairLcm = lcm(sequence[i], sequence[j]);
            sum = (sum + pairLcm) % mod;
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> sequence(n);

    // Read the sequence
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    // Calculate the sum of lcm and print the result modulo 998244353
    cout << sumOfLcm(sequence) << endl;

    return 0;
}