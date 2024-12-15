#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    getline(cin, A);
    getline(cin, B);
    
    int n = A.length();
    int ans = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        bool possible = true;
        
        for (int j = 0; j < n; j++) {
            if (A[j] != B[(j + i) % n]) {
                if (B[(j + i) % n] == '1')
                    cnt++;
                else {
                    possible = false;
                    break;
                }
            }
        }
        
        if (possible)
            ans = min(ans, cnt);
    }
    
    if (ans == INT_MAX)
        ans = -1;
    
    cout << ans << endl;
    
    return 0;
}