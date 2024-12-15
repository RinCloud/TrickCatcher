#include <iostream>
#include <bitset>
#include <limits>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    
    int c[n];
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int minCost = numeric_limits<int>::max();
    for (int mask = 0; mask < (1 << n); mask++) {
        int cost = 0;
        int skills[m] = {0};
        
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                cost += c[i];
                
                for (int j = 0; j < m; j++) {
                    skills[j] += a[i][j];
                }
            }
        }
        
        bool canAchieve = true;
        
        for (int j = 0; j < m; j++) {
            if (skills[j] < x) {
                canAchieve = false;
                break;
            }
        }
        
        if (canAchieve) {
            minCost = min(minCost, cost);
        }
    }
    
    if (minCost != numeric_limits<int>::max()) {
        cout << minCost << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}