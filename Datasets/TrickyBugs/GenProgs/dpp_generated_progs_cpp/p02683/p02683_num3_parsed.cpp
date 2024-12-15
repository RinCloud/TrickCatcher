#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));

    for(int i = 0; i < N; i++) {
        cin >> C[i];
        for(int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int ans = INT_MAX;

    for(int mask = 0; mask < (1 << N); mask++) {
        vector<int> skill(M, 0);
        int cost = 0;

        for(int i = 0; i < N; i++) {
            if(mask & (1 << i)) {
                cost += C[i];
                for(int j = 0; j < M; j++) {
                    skill[j] += A[i][j];
                }
            }
        }

        bool flag = true;
        for(int i = 0; i < M; i++) {
            if(skill[i] < X) {
                flag = false;
                break;
            }
        }

        if(flag) {
            ans = min(ans, cost);
        }
    }

    if(ans == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}