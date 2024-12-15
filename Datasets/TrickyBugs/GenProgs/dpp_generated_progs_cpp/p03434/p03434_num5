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
    
    sort(cards.rbegin(), cards.rend()); // Sort the cards in non-increasing order
    
    int aliceScore = 0;
    int bobScore = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            aliceScore += cards[i];
        } else {
            bobScore += cards[i];
        }
    }
    
    int difference = aliceScore - bobScore;
    cout << difference << endl;
    
    return 0;
}