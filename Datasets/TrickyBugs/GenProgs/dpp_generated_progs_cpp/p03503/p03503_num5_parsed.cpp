#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> F(N, vector<int>(10));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> F[i][j];
        }
    }
    
    vector<vector<int>> P(N, vector<int>(11));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 11; j++) {
            cin >> P[i][j];
        }
    }
    
    int ans = -1e9;
    
    for (int b = 1; b < (1 << 10); b++) {
        int sum = 0;
        
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            
            for (int j = 0; j < 10; j++) {
                if ((b >> j) & F[i][j]) {
                    cnt++;
                }
            }
            
            sum += P[i][cnt];
        }
        
        ans = max(ans, sum);
    }
    
    cout << ans << endl;
    
    return 0;
}