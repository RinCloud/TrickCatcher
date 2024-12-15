#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string longestSubstring(vector<string> S, int K) {
    map<string, int> freq;
    int N = S.size() - 1;
    int maxLen = 0;
    string result = "";
    
    for (int i = 1; i <= N; i++) {
        int length = S[i].length();
        for (int j = 0; j < length; j++) {
            string sub = S[i].substr(j, 1);
            if (freq.find(sub) == freq.end()) {
                freq[sub] = 1;
            } else {
                freq[sub]++;
            }
            
            if (freq[sub] >= K && length - j > maxLen) {
                maxLen = length - j;
                result = sub;
            }
        }
    }
    
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<string> S(N+1);
    for (int i = 0; i <= N; i++) {
        cin >> S[i];
    }
    
    string longest = longestSubstring(S, K);
    cout << longest << endl;
    
    return 0;
}