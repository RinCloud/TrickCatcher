#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;

    vector<long long> shrines(A);
    vector<long long> temples(B);

    for(int i = 0; i < A; i++) {
        cin >> shrines[i];
    }

    for(int i = 0; i < B; i++) {
        cin >> temples[i];
    }

    for(int i = 0; i < Q; i++) {
        long long x;
        cin >> x;

        long long ans = LLONG_MAX;
        auto shrines_lower = lower_bound(shrines.begin(), shrines.end(), x);
        auto temples_lower = lower_bound(temples.begin(), temples.end(), x);

        if(shrines_lower != shrines.end() && temples_lower != temples.end()) {
            long long s1 = *shrines_lower;
            long long t1 = *temples_lower;
            ans = min(ans, abs(x - s1) + abs(s1 - t1));
            ans = min(ans, abs(x - t1) + abs(t1 - s1));
        }

        if(shrines_lower != shrines.begin() && temples_lower != temples.end()) {
            long long s1 = *(shrines_lower - 1);
            long long t1 = *temples_lower;
            ans = min(ans, abs(x - s1) + abs(s1 - t1));
            ans = min(ans, abs(x - t1) + abs(t1 - s1));
        }

        if(shrines_lower != shrines.end() && temples_lower != temples.begin()) {
            long long s1 = *shrines_lower;
            long long t1 = *(temples_lower - 1);
            ans = min(ans, abs(x - s1) + abs(s1 - t1));
            ans = min(ans, abs(x - t1) + abs(t1 - s1));
        }

        if(shrines_lower != shrines.begin() && temples_lower != temples.begin()) {
            long long s1 = *(shrines_lower - 1);
            long long t1 = *(temples_lower - 1);
            ans = min(ans, abs(x - s1) + abs(s1 - t1));
            ans = min(ans, abs(x - t1) + abs(t1 - s1));
        }

        cout << ans << endl;
    }

    return 0;
}