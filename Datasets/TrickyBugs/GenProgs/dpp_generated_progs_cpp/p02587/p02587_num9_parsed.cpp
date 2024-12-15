#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<string, long long> strings;
    for (int i = 0; i < N; i++) {
        string S;
        long long C;
        cin >> S >> C;
        
        if (strings.find(S) == strings.end()) {
            strings[S] = C;
        } else {
            strings[S] = min(strings[S], C);
        }
    }
    
    long long minCost = LLONG_MAX;
    
    for (auto it = strings.begin(); it != strings.end(); it++) {
        string S = it->first;
        long long C = it->second;
        
        string reversedS = S;
        reverse(reversedS.begin(), reversedS.end());
        
        if (reversedS == S) {
            minCost = min(minCost, C);
        } else if (strings.find(reversedS) != strings.end()) {
            minCost = min(minCost, C + strings[reversedS]);
        }
        
        for (int i = 1; i < S.length(); i++) {
            string prefix = S.substr(0, i);
            string suffix = S.substr(i);
            string reversedPrefix = prefix;
            string reversedSuffix = suffix;
            reverse(reversedPrefix.begin(), reversedPrefix.end());
            reverse(reversedSuffix.begin(), reversedSuffix.end());
            
            if (prefix == reversedPrefix && strings.find(reversedSuffix) != strings.end()) {
                minCost = min(minCost, C + strings[reversedSuffix]);
            }
            
            if (suffix == reversedSuffix && strings.find(reversedPrefix) != strings.end()) {
                minCost = min(minCost, C + strings[reversedPrefix]);
            }
        }
    }
    
    if (minCost == LLONG_MAX) {
        cout << -1 << endl;
    } else {
        cout << minCost << endl;
    }
    
    return 0;
}