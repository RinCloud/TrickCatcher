#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    
    vector<bool> smashed(N+1, false);
    
    int ans = 0;
    
    for (int i = N; i >= 1; i--) {
        if (!smashed[i]) {
            ans += a[i];
            for (int j = 2; j <= N/i; j++) {
                smashed[i*j] = true;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}