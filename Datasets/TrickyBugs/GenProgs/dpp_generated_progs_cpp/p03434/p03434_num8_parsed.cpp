#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> cards(N);
    for(int i=0; i<N; i++) {
        cin >> cards[i];
    }
    
    sort(cards.rbegin(), cards.rend()); // Sort the cards in descending order
    
    int aliceScore = 0, bobScore = 0;
    for(int i=0; i<N; i++) {
        if(i%2 == 0) { // Alice's turn
            aliceScore += cards[i];
        } else { // Bob's turn
            bobScore += cards[i];
        }
    }
    
    int scoreDiff = aliceScore - bobScore;
    cout << scoreDiff << endl;
    
    return 0;
}