#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    deque<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int ans = 0;
    for (int i = 0; i <= min(K, N); i++) {
        for (int j = 0; j <= min(K, N); j++) {
            if (i + j > min(K, N)) continue;
            
            deque<int> D;
            for (int k = 0; k < i; k++) {
                D.push_back(V[k]);
            }
            for (int k = N-1; k >= N-j; k--) {
                D.push_back(V[k]);
            }
            
            sort(D.begin(), D.end());
            
            int sum = 0;
            for (int k = 0; k < min(K-(i+j), (int)D.size()); k++) {
                if (D[k] < 0) {
                    sum -= D[k];
                }
            }
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
    
    return 0;
}