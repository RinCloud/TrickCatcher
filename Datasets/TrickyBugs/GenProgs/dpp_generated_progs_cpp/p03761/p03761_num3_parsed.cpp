#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    
    vector<int> freq(26, 50);
    for (const string& s : strings) {
        vector<int> tempFreq(26, 0);
        for (char c : s) {
            tempFreq[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            freq[i] = min(freq[i], tempFreq[i]);
        }
    }
    
    string result;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < freq[i]; j++) {
            result += 'a' + i;
        }
    }
    
    cout << result << endl;

    return 0;
}
