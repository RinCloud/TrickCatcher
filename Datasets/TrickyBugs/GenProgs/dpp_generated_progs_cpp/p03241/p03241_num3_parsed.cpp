#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int N, M;
    cin >> N >> M;

    // Find the maximum possible value of the greatest common divisor
    int maxGCD = gcd(N, M);
    
    // Print the maximum possible value of the greatest common divisor
    cout << maxGCD << endl;
    
    return 0;
}