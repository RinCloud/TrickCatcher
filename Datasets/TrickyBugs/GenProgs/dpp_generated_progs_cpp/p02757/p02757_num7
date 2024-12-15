#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, P;
    string S;
    cin >> N >> P >> S;

    vector<int> counts(P, 0);
    int curr = 0;
    long long ans = 0;
    int pow10 = 1;

    if (P == 2 || P == 5) {
        for (int i = 0; i < N; i++) {
            if ((S[i] - '0') % P == 0) {
                ans += i + 1;
            }
        }
    } else {
        counts[0] = 1;
        for (int i = N - 1; i >= 0; i--) {
            curr = (curr + (S[i] - '0') * pow10) % P;
            ans += counts[curr]++;
            pow10 = (pow10 * 10) % P;
        }
    }

    cout << ans << endl;

    return 0;
}