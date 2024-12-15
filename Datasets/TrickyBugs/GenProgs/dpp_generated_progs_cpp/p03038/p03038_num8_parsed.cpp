#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    vector<int> B(M), C(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i] >> C[i];
    }
    
    sort(cards.begin(), cards.end(), greater<int>());
    
    long long ans = 0;
    int idx = 0;
    for (int i = 0; i < N; i++) {
        if (idx < M && C[idx] > cards[i] && B[idx] > 0) {
            ans += C[idx];
            B[idx]--;
        } else {
            ans += cards[i];
        }
        if (B[idx] == 0) {
            idx++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}