#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    deque<int> D(N);
    for(int i = 0; i < N; i++){
        cin >> D[i];
    }
    int ans = 0;
    for (int a = 0; a <= min(N, K); ++a) {
        for (int b = 0; b <= min(N - a, K - a); ++b) {
            deque<int> jewels;
            for (int i = 0; i < a; ++i) {
                jewels.push_back(D[i]);
            }
            for (int i = 0; i < b; ++i) {
                jewels.push_front(D[N - 1 - i]);
            }
            sort(jewels.begin(), jewels.end());
            int sum = 0;
            for (int i = 0; i < jewels.size(); ++i) {
                if (jewels[i] < 0 && i < K - a - b) {
                    continue;
                }
                sum += jewels[i];
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
    return 0;
}