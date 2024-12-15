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

    for (int q = 0; q < Q; q++) {
        long long x;
        cin >> x;

        // Find the nearest shrine and temple from x to the left
        auto s_itr = upper_bound(shrines.begin(), shrines.end(), x);
        auto t_itr = upper_bound(temples.begin(), temples.end(), x);

        long long min_distance = LLONG_MAX;

        // Case 1: Move from nearest shrine to nearest temple
        if (s_itr != shrines.begin() && t_itr != temples.begin()) {
            long long s = *(s_itr - 1);
            long long t = *(t_itr - 1);
            min_distance = min(min_distance, abs(x - s) + abs(s - t));
        }

        // Case 2: Move from nearest shrine to nearest temple
        if (s_itr != shrines.end() && t_itr != temples.end()) {
            long long s = *s_itr;
            long long t = *t_itr;
            min_distance = min(min_distance, abs(x - s) + abs(s - t));
        }

        // Case 3: Move from nearest temple to nearest shrine
        if (s_itr != shrines.begin() && t_itr != temples.end()) {
            long long s = *(s_itr - 1);
            long long t = *t_itr;
            min_distance = min(min_distance, abs(x - t) + abs(t - s));
        }

        // Case 4: Move from nearest temple to nearest shrine
        if (s_itr != shrines.end() && t_itr != temples.begin()) {
            long long s = *s_itr;
            long long t = *(t_itr - 1);
            min_distance = min(min_distance, abs(x - t) + abs(t - s));
        }

        cout << min_distance << endl;
    }

    return 0;
}