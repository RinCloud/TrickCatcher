#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    
    for (int i = 1; i < N; i++) {
        if (a[i] + a[i-1] > x) {
            ans += a[i] + a[i-1] - x;
            a[i] = max(0, x - a[i-1]);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}