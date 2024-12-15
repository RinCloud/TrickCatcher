#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sz = 1 << N;
    vector<int> A(sz);
    for (int i = 0; i < sz; i++) {
        cin >> A[i];
    }

    vector<int> ans(sz);
    for (int K = 1; K < sz; K++) {
        int mx = 0;
        for (int i = 0; i < sz; i++) {
            if ((i | K) > K) {
                continue;
            }
            for (int j = 0; j < sz; j++) {
                if (i < j && (j | K) > K) {
                    mx = max(mx, A[i] + A[j]);
                }
            }
        }
        ans[K] = mx;
    }

    for (int K = 1; K < sz; K++) {
        cout << ans[K] << "\n";
    }

    return 0;
}