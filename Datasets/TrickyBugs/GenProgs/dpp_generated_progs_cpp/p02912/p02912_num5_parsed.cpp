#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end(), greater<int>());
    
    int ans = 0;
    int limit = 0;
    for (int i = 0; i < N; i++) {
        limit = max(limit, (A[i] + 1) / 2);
        if (M > 0) {
            limit = max(limit, 1);
            M--;
        }
        ans += limit;
    }
    
    cout << ans << endl;
    
    return 0;
}