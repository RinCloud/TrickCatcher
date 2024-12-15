#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 1e9;
    for (int i = 0; i < N; i++) {
        int removed = 0;
        int left = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] < A[i]) {
                if (removed >= Q) {
                    break;
                }
                removed++;
            } else {
                if (j - left + 1 >= K) {
                    ans = min(ans, *max_element(A.begin() + left, A.begin() + j + 1) - *min_element(A.begin() + left, A.begin() + j + 1));
                }
                left = j + 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}