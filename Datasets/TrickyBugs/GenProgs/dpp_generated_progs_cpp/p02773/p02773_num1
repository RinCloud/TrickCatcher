#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<string, int> voteCount;
    int maxCount = 0;
    
    for (int i = 0; i < N; i++) {
        string vote;
        cin >> vote;
        
        voteCount[vote]++;
        maxCount = max(maxCount, voteCount[vote]);
    }
    
    set<string> ans;
    for (auto it : voteCount) {
        if (it.second == maxCount) {
            ans.insert(it.first);
        }
    }
    
    for (auto it : ans) {
        cout << it << endl;
    }
    
    return 0;
}