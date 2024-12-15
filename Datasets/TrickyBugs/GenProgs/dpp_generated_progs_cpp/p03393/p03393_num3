#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isDiverse(string word) {
    int n = word.length();
    bool seen[26] = {false};
    for (int i = 0; i < n; i++) {
        if (seen[word[i]-'a']) {
            return false;
        }
        seen[word[i]-'a'] = true;
    }
    return true;
}

string getNextDiverse(string word) {
    int n = word.length();
    if (n == 26) {
        return "-1";
    }
    
    bool used[26] = {false};
    for (int i = n - 1; i >= 0; i--) {
        used[word[i]-'a'] = true;
        for (int j = word[i]-'a' + 1; j < 26; j++) {
            if (!used[j]) {
                word[i] = 'a' + j;
                for (int k = i + 1; k < n; k++) {
                    for (int l = 0; l < 26; l++) {
                        if (!used[l]) {
                            word[k] = 'a' + l;
                            used[l] = true;
                            break;
                        }
                    }
                }
                return word;
            }
        }
    }
    
    return "-1";
}

int main() {
    string S;
    cin >> S;
    
    string nextDiverse = getNextDiverse(S);
    cout << nextDiverse << endl;
    
    return 0;
}