#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int N, K;
    cin >> N >> K;
    
    // Read prices of each fruit
    vector<int> prices(N);
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }
    
    // Sort the prices in ascending order
    sort(prices.begin(), prices.end());
    
    // Calculate the minimum possible total price
    int total = 0;
    for (int i = 0; i < K; i++) {
        total += prices[i];
    }
    
    // Print the result
    cout << total << endl;
    
    return 0;
}