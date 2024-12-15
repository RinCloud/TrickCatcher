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
        int distance_a = abs(x[i] - 0);
        int distance_b = abs(x[i] - K);
        total_distance += min(distance_a, distance_b);
    }
    
    cout << total_distance * 2 << endl;
    
    return 0;
}