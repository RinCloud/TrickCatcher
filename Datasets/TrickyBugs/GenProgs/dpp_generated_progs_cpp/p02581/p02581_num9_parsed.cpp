#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> cards(3*N);
    for(int i=0; i<3*N; i++) {
        cin >> cards[i];
    }
    
    sort(cards.begin(), cards.end());
    
    int points = 0;
    
    for(int i=0; i<N-1; i++) {
        if(cards[3*i] == cards[3*i+2]) {
            points++;
        }
    }
    
    int count = 1;
    for(int i=1; i<3; i++) {
        if(cards[i] == cards[i-1]) {
            count++;
        }
    }
    
    if(count == 3) {
        points++;
    }
    
    cout << points << endl;
    
    return 0;
}