#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> V(N), C(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }
    
    int maxProfit = 0;
    for (int i = 0; i < N; i++) {
        int profit = V[i] - C[i];
        if (profit > 0) {
            maxProfit += profit;
        }
    }
    
    cout << maxProfit << endl;
    
    return 0;
}