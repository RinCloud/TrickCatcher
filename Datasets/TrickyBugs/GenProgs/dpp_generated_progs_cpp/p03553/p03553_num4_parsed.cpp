#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    for (int x = 1; x <= N; x++) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            if ((i + 1) % x != 0) {
                count += a[i];
            }
        }
        ans = max(ans, count);
    }
    
    cout << ans << endl;
    
    return 0;
}