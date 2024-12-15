#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int longestACGT = 0;
    int currentACGT = 0;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            currentACGT++;
        } else {
            currentACGT = 0;
        }
        
        longestACGT = max(longestACGT, currentACGT);
    }
    
    cout << longestACGT << endl;
    
    return 0;
}