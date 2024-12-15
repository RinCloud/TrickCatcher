#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N, M_a, M_b;
    cin >> N >> M_a >> M_b;

    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int minCost = INT_MAX;
    for (int i = 0; i < N; i++) {
        int g = gcd(a[i], b[i]);
        int lcm = (a[i] / g) * b[i];

        if (M_a % g != 0 || M_b % g != 0)
            continue;

        int ratio_a = M_a * (lcm / a[i]);
        int ratio_b = M_b * (lcm / b[i]);

        int minPacks = max((ratio_a + M_a - 1) / M_a, (ratio_b + M_b - 1) / M_b);

        minCost = min(minCost, minPacks * c[i]);
    }

    if (minCost == INT_MAX)
        cout << -1 << endl;
    else
        cout << minCost << endl;

    return 0;
}