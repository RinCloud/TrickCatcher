#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<bool> K(N+1, false);
    vector<int> A(N+1, 0);
    int ac = 0;
    int wa = 0;
    
    for (int i = 0; i < M; i++) {
        int P;
        string S;
        cin >> P >> S;
        if (K[P]) {
            continue;
        }
        if (S == "AC") {
            ac++;
            wa += A[P];
            K[P] = true;
        } else {
            A[P]++;
        }
    }
    
    printf("%d %d", ac, wa);
    return 0;
}