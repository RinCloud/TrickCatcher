#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;
    
    int p[N];
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }
    
    int diff = INT_MAX;
    int ans = INT_MAX;
    
    for (int i = 0; i <= 100; i++) {
        bool found = false;
        for (int j = 0; j < N; j++) {
            if (p[j] == i) {
                found = true;
                break;
            }
        }
        
        if (!found && abs(X - i) < diff) {
            diff = abs(X - i);
            ans = i;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}