#include <iostream>
#include <string>
using namespace std;

string findNextWord(string word) {
    int n = word.length();
    
    if (n >= 26) {
        return "-1";
    }
    
    int freq[26] = {0};
    for (int i = 0; i < n; i++) {
        freq[word[i] - 'a']++;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        freq[word[i] - 'a']--;
        for (int j = word[i] - 'a' + 1; j < 26; j++) {
            if (freq[j] == 0) {
                word[i] = 'a' + j;
                freq[j]++;
                
                for (int k = 0, r = 0; k < 26 && r < n; k++) {
                    if (freq[k] == 0) {
                        word[n + r] = 'a' + k;
                        freq[k]++;
                        r++;
                    }
                }
                
                return word;
            }
        }
    }
    
    return "-1";
}

int main() {
    string word;
    cin >> word;
    
    string nextWord = findNextWord(word);
    cout << nextWord << endl;
    
    return 0;
}