#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;

    vector<long long> shrines(A);
    for (int i = 0; i < A; i++) {
        cin >> shrines[i];
    }

    vector<long long> temples(B);
    for (int i = 0; i < B; i++) {
        cin >> temples[i];
    }

    while (Q--) {
        long long x;
        cin >> x;

        long long ans = LLONG_MAX;
        auto shrine_it = lower_bound(shrines.begin(), shrines.end(), x);
        auto temple_it = lower_bound(temples.begin(), temples.end(), x);
        
        // Check minimum distance between a shrine and a temple
        if (shrine_it != shrines.end() && temple_it != temples.end()) {
            ans = min(ans, abs(*shrine_it - *temple_it));
        }
        if (shrine_it != shrines.begin() && temple_it != temples.begin()) {
            shrine_it--;
            temple_it--;
            ans = min(ans, abs(*shrine_it - *temple_it));
        }
        if (shrine_it != shrines.begin() && temple_it != temples.end()) {
            shrine_it--;
            ans = min(ans, abs(*shrine_it - *temple_it));
        }
        if (shrine_it != shrines.end() && temple_it != temples.begin()) {
            temple_it--;
            ans = min(ans, abs(*shrine_it - *temple_it));
        }

        cout << ans << endl;
    }

    return 0;
}