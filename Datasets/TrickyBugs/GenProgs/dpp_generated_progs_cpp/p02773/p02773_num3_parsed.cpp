#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string, int> count;
    int maxCount = 0;
    
    for (int i = 0; i < N; i++) {
        string vote;
        cin >> vote;
        
        count[vote]++;
        maxCount = max(maxCount, count[vote]);
    }
    
    vector<string> result;
    for (auto it : count) {
        if (it.second == maxCount) {
            result.push_back(it.first);
        }
    }
    
    sort(result.begin(), result.end());
    
    for (auto s : result) {
        cout << s << endl;
    }
    
    return 0;
}
