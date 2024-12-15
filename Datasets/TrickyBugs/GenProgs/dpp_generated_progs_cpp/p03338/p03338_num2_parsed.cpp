#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int N;
    string S;
    
    cin >> N >> S;
    
    int maxCommonLetters = 0;
    
    for (int i = 1; i < N; i++) {
        string X = S.substr(0, i);
        string Y = S.substr(i);
        
        unordered_set<char> lettersX(X.begin(), X.end());
        unordered_set<char> lettersY(Y.begin(), Y.end());
        
        int commonLetters = 0;
        
        for (char letter : lettersX) {
            if (lettersY.find(letter) != lettersY.end()) {
                commonLetters++;
            }
        }
        
        maxCommonLetters = max(maxCommonLetters, commonLetters);
    }
    
    cout << maxCommonLetters << endl;
    
    return 0;
}