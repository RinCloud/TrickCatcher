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
    
    vector<int> costs(N);
    costs[0] = abs(A[0]);
    for (int i = 1; i < N; i++) {
        costs[i] = abs(A[i] - A[i-1]);
    }
    costs[N-1] += abs(A[N-1]);
    
    int total_cost = 0;
    for (int i = 0; i < N; i++) {
        total_cost += costs[i];
    }
    
    for (int i = 0; i < N; i++) {
        int cost_without_i;
        if (i == 0) {
            cost_without_i = total_cost - abs(A[0]) - costs[1];
        } else if (i == N-1) {
            cost_without_i = total_cost - abs(A[N-1]) - costs[N-2];
        } else {
            cost_without_i = total_cost - costs[i-1] - costs[i+1];
        }
        
        cout << cost_without_i << endl;
    }
    
    return 0;
}