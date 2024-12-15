#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> piles(n);
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }
    
    long long min_stones = 1e12, max_stones = 0, sum_stones = 0;
    
    for (int i = 1; i < n; i++) {
        min_stones = min(min_stones, piles[i]);
        max_stones = max(max_stones, piles[i]);
        sum_stones += piles[i];
    }
    
    if (max_stones >= piles[0]) {
        cout << -1 << endl;
    } else {
        long long min_move = 0;
        if (sum_stones >= piles[0] - 1) {
            min_move = piles[0] - max_stones - 1;
        } else {
            min_move = piles[0] - 1 - sum_stones;
        }
        cout << min_move << endl;
    }
    
    return 0;
}