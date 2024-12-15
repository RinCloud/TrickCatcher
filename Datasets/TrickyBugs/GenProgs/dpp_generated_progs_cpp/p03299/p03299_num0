#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    
    long long ans = 1;
    for (int i = 0; i < N; i++) {
        if (h[i] > h[i + 1]) {
            ans = 0;
            break;
        }
        
        ans = (ans * (h[i] - 1)) % MOD;
    }
    
    cout << ans << endl;

    return 0;
}