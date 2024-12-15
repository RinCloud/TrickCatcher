#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> headlines(n);
    map<char, int> freq;
    
    for (int i = 0; i < n; i++) {
        cin >> headlines[i];
        
        map<char, int> currFreq;
        for (char c : headlines[i]) {
            currFreq[c]++;
        }
        
        for (auto it = freq.begin(); it != freq.end(); it++) {
            char c = it->first;
            int f = it->second;
            
            freq[c] = min(f, currFreq[c]);
        }
        
        for (auto it = currFreq.begin(); it != currFreq.end(); it++) {
            char c = it->first;
            int f = it->second;
            
            if (freq.count(c) == 0) {
                freq[c] = f;
            } else {
                freq[c] = min(freq[c], f);
            }
        }
    }
    
    string ans = "";
    for (auto it = freq.begin(); it != freq.end(); it++) {
        char c = it->first;
        int f = it->second;
        
        ans += string(f, c);
    }
    
    sort(ans.begin(), ans.end());
    
    cout << ans << endl;
    
    return 0;
}