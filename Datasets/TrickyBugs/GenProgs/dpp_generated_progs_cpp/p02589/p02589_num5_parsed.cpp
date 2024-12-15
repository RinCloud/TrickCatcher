#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> strings(N);
    for (int i = 0; i < N; ++i) {
        cin >> strings[i];
    }
    
    int count = 0;
    unordered_set<string> set;
    for (int i = 0; i < N; ++i) {
        string s = strings[i];
        sort(s.begin(), s.end());
        if (set.find(s) != set.end()) {
            count += set.size();
        }
        set.insert(s);
    }
    
    cout << count << endl;
    
    return 0;
}