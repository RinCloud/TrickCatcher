#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;

    int minCost = min(q * 4, min(h * 2, s));

    long long int totalCost = minCost * (n / 2);

    if (n % 2 == 1) {
        totalCost += min(minCost * 2, d);
    }

    cout << totalCost << endl;

    return 0;
}