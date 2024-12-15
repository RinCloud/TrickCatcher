#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    
    unordered_map<char, int> charCount;
    for(const string& s : strings) {
        unordered_map<char, int> tempCount;
        for(char c : s) {
            tempCount[c]++;
        }
        for(auto& p : tempCount) {
            charCount[p.first] = max(charCount[p.first], p.second);
        }
    }
    
    string result = "";
    for(auto& p : charCount) {
        char c = p.first;
        int count = p.second;
        result += string(count, c);
    }
    
    sort(result.begin(), result.end());
    
    cout << result << endl;
    
    return 0;
}