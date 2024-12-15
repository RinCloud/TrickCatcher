#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N+1);
    for(int i=1; i<=N; i++) {
        cin >> a[i];
    }
    
    vector<bool> smashed(N+1, false);
    int ans = 0;
    
    for(int i=2; i<=N; i++) {
        if(smashed[i]) continue;
        
        for(int j=i; j<=N; j+=i) {
            smashed[j] = true;
        }
        
        ans += a[i];
    }
    
    cout << ans << endl;

    return 0;
}