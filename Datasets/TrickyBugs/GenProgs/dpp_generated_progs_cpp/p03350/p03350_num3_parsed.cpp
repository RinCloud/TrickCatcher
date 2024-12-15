#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> s(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> s[i];
    }
    
    vector<set<string>> subs(k+1);
    map<string, int> freq;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < (1 << i); j++) {
            string t;
            for (int b = i - 1; b >= 0; b--) {
                if (j & (1 << b)) {
                    t += '1';
                } else {
                    t += '0';
                }
            }
            subs[i].insert(t);
        }
    }
    
    for (int i = 0; i <= n; i++) {
        for (const string& t : subs[i]) {
            freq[t]++;
        }
    }
    
    string answer = "";
    
    for (int i = n; i >= 0; i--) {
        for (const string& t : subs[i]) {
            if (freq[t] >= k && (answer == "" || t < answer)) {
                answer = t;
            }
        }
    }
    
    cout << answer << endl;
    
    return 0;
}