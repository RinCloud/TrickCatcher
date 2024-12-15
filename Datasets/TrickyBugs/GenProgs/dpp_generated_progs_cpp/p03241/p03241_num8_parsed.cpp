
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N, M;
    cin >> N >> M;

    // Find the maximum possible value of the greatest common divisor 
    // by checking the factors of M and selecting the largest factor that is less than or equal to M/N.
    int max_gcd = 1;
    for (int i = 1; i * i <= M; ++i) {
        if (M % i == 0) {
            int factor1 = i;
            int factor2 = M / i;
            if (factor1 <= M / N)
                max_gcd = max(max_gcd, factor1);
            if (factor2 <= M / N)
                max_gcd = max(max_gcd, factor2);
        }
    }

    cout << max_gcd << endl;

    return 0;
}
