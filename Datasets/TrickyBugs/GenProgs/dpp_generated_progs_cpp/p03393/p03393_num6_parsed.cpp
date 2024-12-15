#include <iostream>
#include <algorithm>
using namespace std;

string findNextWord(string S) {
    int n = S.length();
    
    for(int i = n-1; i >= 0; i--) {
        if(S[i] != 'z') {
            S[i]++;
            if(count(S.begin(), S.end(), S[i]) == 1) {
                return S;
            }
            else {
                for(int j = i+1; j < n; j++) {
                    for(char c = 'a'; c <= 'z'; c++) {
                        if(count(S.begin(), S.end(), c) == 0) {
                            S[j] = c;
                            return S;
                        }
                    }
                }
            }
        }
    }
    
    return "-1";
}

int main() {
    string S;
    cin >> S;
    
    string nextWord = findNextWord(S);
    cout << nextWord << endl;
    
    return 0;
}