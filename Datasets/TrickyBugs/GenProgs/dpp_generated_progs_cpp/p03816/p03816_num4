#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    sort(cards.begin(), cards.end());
    
    int remaining_cards = 0;
    for (int i = 0; i < N-2; i += 3) {
        if (cards[i] != cards[i+2]) {
            remaining_cards += 3;
        }
    }
    
    cout << remaining_cards << endl;
    
    return 0;
}