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
    
    int total_distance = 0;
    for (int i = 0; i < N; i++) {
        int distA = abs(x[i] - 0);
        int distB = abs(x[i] - K);
        total_distance += min(distA, distB);
    }
    
    cout << total_distance * 2 << endl;
    
    return 0;
}