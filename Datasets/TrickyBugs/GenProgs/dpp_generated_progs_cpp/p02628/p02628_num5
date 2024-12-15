#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> prices(N);
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }
    
    sort(prices.begin(), prices.end());
    
    int total_price = 0;
    for (int i = 0; i < K; i++) {
        total_price += prices[i];
    }
    
    cout << total_price << endl;
    
    return 0;
}