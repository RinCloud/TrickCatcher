#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> cards(N);
    map<int, int> freq;
    
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
        freq[cards[i]]++;
    }
    
    int ans = freq.size();
    
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second > 1) {
            ans -= (it->second % 2);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}