#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;
    
    int cost = min({4 * Q, 2 * H, S});
    if (N % 2 == 0) {
        cost = min(cost, D);
    }
    
    long long total_cost = 0;
    if (N >= 2) {
        total_cost = (N / 2) * D;
        N %= 2;
    }
    
    total_cost += N * cost;
    cout << total_cost << endl;
    
    return 0;
}