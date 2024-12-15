#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int A, B;
    cin >> A >> B;

    int commonDivisors = 0;
    int gcdAB = gcd(A, B);
    
    for (int i = 1; i <= sqrt(gcdAB); i++) {
        if (gcdAB % i == 0) {
            if (gcdAB / i == i) {
                commonDivisors++;
            } else {
                commonDivisors += 2;
            }
        }
    }
    
    cout << commonDivisors << endl;

    return 0;
}