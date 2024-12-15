#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> switches(M, vector<int>(N, 0));
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int s;
            cin >> s;
            switches[i][s - 1] = 1;
        }
    }
    
    vector<int> p(M, 0);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }
    
    int ans = 0;
    for (int i = 0; i < (1 << N); i++) {
        bool flag = true;
        for (int j = 0; j < M; j++) {
            int count = 0;
            for (int k = 0; k < N; k++) {
                if ((i & (1 << k)) && switches[j][k]) {
                    count++;
                }
            }
            if (count % 2 != p[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}