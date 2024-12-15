#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> X(M);
    for (int i = 0; i < M; i++) {
        cin >> X[i];
    }
    
    sort(X.begin(), X.end());
    
    vector<int> distances(M-1);
    for (int i = 0; i < M-1; i++) {
        distances[i] = X[i+1] - X[i];
    }
    
    sort(distances.begin(), distances.end());
    
    int ans = 0;
    for (int i = 0; i < M-N; i++) {
        ans += distances[i];
    }
    
    cout << ans << endl;
    
    return 0;
}