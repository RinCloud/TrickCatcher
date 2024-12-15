#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string findLongestString(vector<string>& strings) {
    unordered_map<char, int> charCount;
    for (auto& str : strings) {
        for (char c : str) {
            charCount[c]++;
        }
    }
    
    string result = "";
    int count = 0;
    for (auto& pair : charCount) {
        if (pair.second == strings.size()) {
            if (pair.second > count) {
                result = string(pair.second, pair.first);
                count = pair.second;
            } else if (pair.second == count) {
                string curr_string(pair.second, pair.first);
                if (curr_string < result) {
                    result = curr_string;
                }
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    
    string longestString = findLongestString(strings);
    cout << longestString << endl;
    
    return 0;
}