#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

const ll MOD = 1000000007;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<int> a(N);
    vector<int> b(N);
    
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    vector<ll> ans(10);
    ll zero = (H - 2) * (W - 2);
    vector<int> dx = {0, -1, -2, -2, -2, -1, 0, 1, 2, 2, 2, 1};
    vector<int> dy = {0, 2, 2, 1, 0, -1, -2, -2, -2, -1, 0, 1};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 12; j++) {
            int x = a[i] + dx[j];
            int y = b[i] + dy[j];
            
            if (x >= 1 && y >= 1 && x <= H - 2 && y <= W - 2) {
                ans[0]--;
                ans[j % 10]++;
            }
        }
    }

    cout << zero << "\n";
    for (int i = 1; i < 10; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}
