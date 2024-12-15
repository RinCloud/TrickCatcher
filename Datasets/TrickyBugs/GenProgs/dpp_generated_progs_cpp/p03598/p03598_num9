#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    int minDistance = 0;
    
    for (int i = 0; i < N; i++) {
        minDistance += min(2 * x[i], 2 * (K - x[i]));
    }
    
    cout << minDistance << endl;
    
    return 0;
}