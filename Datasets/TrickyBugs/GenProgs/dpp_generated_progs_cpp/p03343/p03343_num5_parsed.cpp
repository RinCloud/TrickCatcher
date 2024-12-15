#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = INT_MAX;
    for(int i = 0; i < N; i++) {
        vector<int> subseq;
        for(int j = 0; j < N; j++) {
            if(A[j] >= A[i]) {
                subseq.push_back(A[j]);
            }
            if(subseq.size() == K) {
                break;
            }
        }

        if(subseq.size() == K) {
            sort(subseq.begin(), subseq.end());
            int smallest = subseq[0];
            int largest = subseq[K - 1];
            if(subseq[Q - 1] == smallest) {
                int diff = largest - smallest;
                ans = min(ans, diff);
            }
        }
    }

    cout << ans << endl;

    return 0;
}