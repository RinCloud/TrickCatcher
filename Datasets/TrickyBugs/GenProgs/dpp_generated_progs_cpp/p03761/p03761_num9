#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string commonCharacters(int n, vector<string>& strings) {
    // count the frequency of each character in the strings
    vector<int> charCount(26, INT_MAX);
    
    for (string s : strings) {
        vector<int> tempCount(26, 0);
        
        for (char c : s) {
            tempCount[c - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            charCount[i] = min(charCount[i], tempCount[i]);
        }
    }
    
    // create the common string
    string commonString = "";
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < charCount[i]; j++) {
            commonString += (char)('a' + i);
        }
    }
    
    return commonString;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    
    sort(strings.begin(), strings.end());
    
    string commonString = commonCharacters(n, strings);
    
    if (commonString.empty()) {
        cout << endl; // answer is an empty string
    } else {
        cout << commonString << endl;
    }
    
    return 0;
}