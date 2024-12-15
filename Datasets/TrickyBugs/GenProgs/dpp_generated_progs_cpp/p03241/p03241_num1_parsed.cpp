#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N, M;
    cin >> N >> M;
    
    int gcd_max = M;
    for (int i = 2; i <= M / N; i++) {
        if (M % i == 0) {
            gcd_max = max(gcd_max, i);
        }
    }
    
    cout << gcd_max << endl;

    return 0;
}