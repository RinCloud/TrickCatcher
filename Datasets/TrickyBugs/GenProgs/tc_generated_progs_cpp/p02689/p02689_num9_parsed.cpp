#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> H(N);
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }
    
    vector<int> ma(N, 0);
    int a, b;
    for(int i = 0; i < M; i++) {
        cin >> a >> b;
        ma[a-1] = max(ma[a-1], H[b-1]);
        ma[b-1] = max(ma[b-1], H[a-1]);
    }
    
    int ans = 0;
    for(int i = 0; i < N; i++) {
        if(H[i] > ma[i]) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
