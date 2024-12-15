#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> switches(M);
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        switches[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> switches[i][j];
        }
    }
    
    vector<int> p(M);
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }
    
    int count = 0;
    for (int i = 0; i < (1 << N); i++) {
        bool valid = true;
        for (int j = 0; j < M; j++) {
            int on_count = 0;
            for (int k = 0; k < switches[j].size(); k++) {
                if ((i & (1 << (switches[j][k] - 1))) != 0) {
                    on_count++;
                }
            }
            if (on_count % 2 != p[j]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}