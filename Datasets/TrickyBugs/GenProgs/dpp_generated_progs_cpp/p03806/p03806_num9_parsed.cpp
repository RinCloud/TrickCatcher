#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Package {
    int a;
    int b;
    int c;

    bool operator<(const Package& other) const {
        return c < other.c;
    }
};

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int N, M_a, M_b;
    cin >> N >> M_a >> M_b;

    vector<Package> packages(N);
    for (int i = 0; i < N; i++) {
        cin >> packages[i].a >> packages[i].b >> packages[i].c;
    }

    int min_cost = INT_MAX;
    for (int i = 0; i < N; i++) {
        int g = gcd(M_a, M_b);

        int ratio_a = M_a / g;
        int ratio_b = M_b / g;
        int min_ratio = min(packages[i].a / ratio_a, packages[i].b / ratio_b);

        int cost = packages[i].c * min_ratio;
        min_cost = min(min_cost, cost);
    }

    cout << (min_cost == INT_MAX ? -1 : min_cost) << endl;

    return 0;
}