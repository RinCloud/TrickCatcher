#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    unordered_set<int> distinct_cards;
    for (int i = 0; i < N; i++) {
        distinct_cards.insert(cards[i]);
    }
    
    cout << min(distinct_cards.size(), (N+1)/2) << endl;
    
    return 0;
}