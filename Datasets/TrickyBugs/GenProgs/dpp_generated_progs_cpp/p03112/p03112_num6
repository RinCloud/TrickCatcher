#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;

    vector<long long> shrines(A), temples(B), queries(Q);

    for (int i = 0; i < A; i++) {
        cin >> shrines[i];
    }

    for (int i = 0; i < B; i++) {
        cin >> temples[i];
    }

    for (int i = 0; i < Q; i++) {
        cin >> queries[i];
    }

    for (int i = 0; i < Q; i++) {
        long long x = queries[i];
        long long minDistance = LLONG_MAX;

        auto lowerShrine = lower_bound(shrines.begin(), shrines.end(), x);
        auto upperShrine = upper_bound(shrines.begin(), shrines.end(), x);
        auto lowerTemple = lower_bound(temples.begin(), temples.end(), x);
        auto upperTemple = upper_bound(temples.begin(), temples.end(), x);

        if (lowerShrine != shrines.begin() && lowerTemple != temples.begin()) {
            minDistance = min(minDistance, max(x - *(--lowerShrine), x - *(--lowerTemple)));
        }

        if (lowerShrine != shrines.end() && lowerTemple != temples.end()) {
            minDistance = min(minDistance, max(*lowerShrine - x, *lowerTemple - x));
        }

        if (lowerShrine != shrines.end() && lowerTemple != temples.begin()) {
            minDistance = min(minDistance, max(*lowerShrine - x, x - *(--lowerTemple)));
        }

        if (lowerShrine != shrines.begin() && lowerTemple != temples.end()) {
            minDistance = min(minDistance, max(x - *(--lowerShrine), *lowerTemple - x));
        }

        cout << minDistance << endl;
    }

    return 0;
}