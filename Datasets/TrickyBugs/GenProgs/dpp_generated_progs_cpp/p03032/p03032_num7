#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    deque<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }

    int ans = 0;
    for (int i = 0; i <= min(N, K); i++) {
        for (int l = 0; l <= i; l++) {
            int r = i - l;
            deque<int> jewels;
            for (int j = 0; j < l; j++) {
                jewels.push_back(D[j]);
            }
            for (int j = N - r; j < N; j++) {
                jewels.push_back(D[j]);
            }
            int sum = 0;
            for (int j = 0; j < jewels.size(); j++) {
                sum += jewels[j];
            }
            sort(jewels.begin(), jewels.end());
            for (int j = 0; j < min(K - i, (int)jewels.size()); j++) {
                if (jewels[j] >= 0) {
                    break;
                }
                sum -= jewels[j];
            }
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}