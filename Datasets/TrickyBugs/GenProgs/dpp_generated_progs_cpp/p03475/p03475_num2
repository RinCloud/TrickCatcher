#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> C(N-1);
    vector<int> S(N-1);
    vector<int> F(N-1);

    for (int i = 0; i < N-1; i++) {
        cin >> C[i] >> S[i] >> F[i];
    }

    vector<int> ans(N, 0);
    for (int i = N-2; i >= 0; i--) {
        ans[i] = max(ans[i+1], ((ans[i+1]-S[i]+F[i]-1) / F[i]) * F[i] + S[i] + C[i]);
    }

    for (int i = 0; i < N-1; i++) {
        cout << ans[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}