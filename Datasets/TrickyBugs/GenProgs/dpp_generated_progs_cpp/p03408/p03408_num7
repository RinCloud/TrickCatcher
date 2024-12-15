#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n, m;
    unordered_map<string, int> blue_cards, red_cards;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        blue_cards[s]++;
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        string t;
        cin >> t;
        red_cards[t]++;
    }
    
    int max_earnings = 0;
    for (auto& p : blue_cards) {
        string card = p.first;
        int blue_count = p.second;
        int red_count = red_cards[card];
        int earnings = blue_count - red_count;
        max_earnings = max(max_earnings, earnings);
    }
    
    cout << max_earnings << endl;
    
    return 0;
}