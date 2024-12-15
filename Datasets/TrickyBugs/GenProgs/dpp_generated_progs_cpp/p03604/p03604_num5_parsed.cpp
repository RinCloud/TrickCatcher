#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> coordinates(2 * N);
    
    for (int i = 0; i < 2 * N; i++) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }
    
    sort(coordinates.begin(), coordinates.end());
    
    vector<int> factorial(2 * N + 1);
    factorial[0] = 1;
    
    for (int i = 1; i <= 2 * N; i++) {
        factorial[i] = (factorial[i - 1] * 1LL * i) % MOD;
    }
    
    long long ans = factorial[2 * N];
    
    int cntA = 0, cntB = 0;
    
    for (int i = 0; i < 2 * N; i++) {
        if (coordinates[i].second == 1) {
            cntA++;
        } else {
            cntB++;
        }
        
        if (cntA < cntB) {
            ans = 0;
            break;
        }
        
        if (i == 2 * N - 1) {
            continue;
        }
        
        if (coordinates[i].first == coordinates[i + 1].first) {
            continue;
        }
        
        ans = (ans - factorial[2 * N - i - 1] + MOD) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}