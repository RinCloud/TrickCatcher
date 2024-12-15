#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> piles(n);
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }
    
    long long total_stones = 0;
    for (int i = 1; i < n; i++) {
        total_stones += piles[i];
    }
    
    long long stones_to_move = piles[0] - total_stones;
    
    if (stones_to_move >= 0 && stones_to_move <= (piles[0] - 1)) {
        cout << stones_to_move << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}