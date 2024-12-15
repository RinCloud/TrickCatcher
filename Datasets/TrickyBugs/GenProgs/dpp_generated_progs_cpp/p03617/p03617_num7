#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Q, H, S, D;
    long long N;
    cin >> Q >> H >> S >> D >> N;
    
    // calculate the cost of each bottle
    long long cost_0_25 = Q * 4;
    long long cost_0_5 = H * 2;
    long long cost_1 = S;
    long long cost_2 = D;
    
    // find the minimum cost to buy N liters of ice tea
    long long min_cost = 0;
    if (N >= 2) {
        long long num_2_liters = N / 2;
        min_cost = min(num_2_liters * cost_2, num_2_liters * 2 * cost_1);
        
        N = N % 2;
    }
    if (N >= 1) {
        min_cost += min(N * cost_1, N * 2 * cost_0_5);
        
        N = 0;
    }
    if (N >= 0.5) {
        min_cost += min(N * cost_0_5, N * 2 * cost_0_25);
        
        N = 0;
    }
    if (N >= 0.25) {
        min_cost += N * cost_0_25;
    }
    
    cout << min_cost << endl;
    
    return 0;
}