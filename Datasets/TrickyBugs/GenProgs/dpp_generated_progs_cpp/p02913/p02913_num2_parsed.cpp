#include <iostream>
#include <vector>
#include <string>

using namespace std;

int findMaxLength(string s) {
    int n = s.length();
    
    vector<int> z(n, 0); // Z-array stores the length of the longest common prefix between s and its suffix starting at index i
    vector<int> cnt(n + 1, 0); // cnt[i] stores the frequency of strings of length i
    
    int l = 0, r = 0; // l and r represent the left and right boundary of the Z-box
    for (int i = 1; i < n; i++) {
        if (i <= r) {
            z[i] = min(r - i + 1, z[i - l]);
        }

        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        
        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    
    for (int i = 1; i < n; i++) {
        cnt[z[i]]++;
    }
    
    for (int i = n - 1; i >= 1; i--) {
        cnt[i] += cnt[i + 1]; // Computing the prefix sum
        
        if (cnt[i] >= 2) { // If a string of length i occurs twice or more
            return i;
        }
    }
    
    return 0;
}

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    int maxLength = findMaxLength(S);
    cout << maxLength << endl;
    
    return 0;
}
