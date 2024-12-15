#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> switches(M, vector<int>(N+1, 0));
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int s;
            cin >> s;
            switches[i][s] = 1;
        }
    }
    
    vector<int> p(M);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }
    
    int count = 0;
    for (int mask = 0; mask < (1 << N); mask++) {
        bool light_all = true;
        for (int i = 0; i < M; i++) {
            int sum = 0;
            for (int j = 1; j <= N; j++) {
                if (switches[i][j] == 1 && (mask & (1 << (j-1)))) {
                    sum++;
                }
            }
            if (sum % 2 != p[i]) {
                light_all = false;
                break;
            }
        }
        if (light_all) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}