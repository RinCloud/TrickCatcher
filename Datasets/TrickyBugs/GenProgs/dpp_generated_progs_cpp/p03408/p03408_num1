#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    unordered_map<string, int> cards;
    
    // Input the number of blue and red cards
    cin >> N;
    
    // Input the strings written on the blue cards
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        cards[s]++;
    }
    
    // Input the number of red cards
    cin >> M;
    
    // Input the strings written on the red cards
    for (int i = 0; i < M; i++) {
        cin >> s;
        cards[s]--;
    }
    
    // Calculate the maximum earnings for Takahashi
    int maximum_earnings = 0;
    for (auto it = cards.begin(); it != cards.end(); ++it) {
        maximum_earnings = max(maximum_earnings, it->second);
    }
    
    // Output the maximum earnings
    cout << maximum_earnings << endl;
    
    return 0;
}