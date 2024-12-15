#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;

    vector<long long> shrines(A);
    vector<long long> temples(B);

    for (int i = 0; i < A; i++) {
        cin >> shrines[i];
    }
    for (int i = 0; i < B; i++) {
        cin >> temples[i];
    }

    for (int i = 0; i < Q; i++) {
        long long x;
        cin >> x;

        long long ans = LLONG_MAX;

        auto lower_shrine = lower_bound(shrines.begin(), shrines.end(), x);
        auto upper_shrine = upper_bound(shrines.begin(), shrines.end(), x);
        auto lower_temple = lower_bound(temples.begin(), temples.end(), x);
        auto upper_temple = upper_bound(temples.begin(), temples.end(), x);

        if (lower_shrine != shrines.end() && lower_temple != temples.end()) {
            ans = min(ans, abs(x - *lower_shrine) + abs(*lower_shrine - *lower_temple));
        }
        if (lower_shrine != shrines.end() && upper_temple != temples.begin()) {
            ans = min(ans, abs(x - *lower_shrine) + abs(*lower_shrine - *prev(upper_temple)));
        }
        if (upper_shrine != shrines.begin() && lower_temple != temples.end()) {
            ans = min(ans, abs(x - *prev(upper_shrine)) + abs(*prev(upper_shrine) - *lower_temple));
        }
        if (upper_shrine != shrines.begin() && upper_temple != temples.begin()) {
            ans = min(ans, abs(x - *prev(upper_shrine)) + abs(*prev(upper_shrine) - *prev(upper_temple)));
        }

        cout << ans << endl;
    }

    return 0;
}
