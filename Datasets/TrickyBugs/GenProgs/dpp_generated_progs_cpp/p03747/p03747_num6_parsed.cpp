#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, L, T;
    cin >> N >> L >> T;
    
    vector<int> X(N), W(N), D(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> W[i];
        D[i] = (W[i] == 1) ? 1 : -1;
    }

    for (int i = 0; i < N; i++) {
        X[i] = (X[i] + D[i] * T) % L;
        if (X[i] < 0) {
            X[i] += L;
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << X[i] << endl;
    }

    return 0;
}