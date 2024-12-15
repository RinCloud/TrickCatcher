#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    sort(cards.begin(), cards.end());
    
    int x = 0;
    int y = 0;
    for (int i = 0; i < N; i++) {
        if (i < N/2) {
            x += cards[i];
        } else {
            y += cards[i];
        }
    }
    
    int diff = abs(x - y);
    cout << diff << endl;
    
    return 0;
}