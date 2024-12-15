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
        int x = A[i];
        vector<int> removed;
        for (int j = 0; j < N; j++) {
            if (A[j] < x) {
                removed.push_back(A[j]);
                if (removed.size() == K) {
                    break;
                }
            }
        }
        if (removed.size() == K-1) {
            sort(removed.begin(), removed.end());
            ans = min(ans, removed[K-2]);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}