#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> switches(M);
    vector<int> p(M);
    for(int i = 0; i < M; i++) {
        int k;
        cin >> k;
        switches[i] = vector<int>(k);
        for(int j = 0; j < k; j++) {
            cin >> switches[i][j];
        }
    }

    for(int i = 0; i < M; i++) {
        cin >> p[i];
    }

    int ans = 0;
    for(int i = 0; i < (1 << N); i++) {
        bool valid = true;
        for(int j = 0; j < M; j++) {
            int count = 0;
            for(int k = 0; k < switches[j].size(); k++) {
                if(i & (1 << (switches[j][k] - 1))) {
                    count++;
                }
            }
            if(count % 2 != p[j]) {
                valid = false;
                break;
            }
        }
        if(valid) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}