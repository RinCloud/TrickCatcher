#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> cost(N);
    for (int i = 0; i < N; i++) {
        cost[i] = abs(A[i] - A[(i+1) % N]);
    }
    
    int total_cost = 0;
    for (int i = 0; i < N; i++) {
        total_cost += cost[i];
    }
    
    for (int i = 0; i < N; i++) {
        int cancel_cost = total_cost - cost[i];
        cout << cancel_cost << endl;
    }
    
    return 0;
}