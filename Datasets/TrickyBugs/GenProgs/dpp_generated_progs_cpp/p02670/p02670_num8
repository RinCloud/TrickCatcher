#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> P(N * N);
    for (int i = 0; i < N * N; i++) {
        cin >> P[i];
    }
    
    vector<int> row(N * N + 1), col(N * N + 1);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            row[P[i * N + j]] = i;
            col[P[i * N + j]] = j;
        }
    }
    
    int ans = 0;
    for (int i = 2; i <= N * N; i++) {
        ans += abs(row[i] - row[i - 1]) + abs(col[i] - col[i - 1]);
    }
    
    cout << ans << endl;
    
    return 0;
}