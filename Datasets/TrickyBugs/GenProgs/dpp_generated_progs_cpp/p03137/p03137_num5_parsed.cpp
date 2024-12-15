#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> X(M);
    for (int i = 0; i < M; i++) {
        cin >> X[i];
    }
    
    sort(X.begin(), X.end());
    
    vector<int> distances;
    for (int i = 0; i < M - 1; i++) {
        distances.push_back(abs(X[i + 1] - X[i]));
    }
    
    sort(distances.begin(), distances.end(), greater<int>());
    
    int ans = X[M - 1] - X[0];
    for (int i = 0; i < min(N - 1, M - 1); i++) {
        ans -= distances[i];
    }
    
    cout << ans << endl;
    
    return 0;
}