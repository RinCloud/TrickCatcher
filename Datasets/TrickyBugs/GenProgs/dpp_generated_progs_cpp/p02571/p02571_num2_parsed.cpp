#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    
    int minChanges = S.size();
    
    for(int i = 0; i <= S.size() - T.size(); i++) {
        int changes = 0;
        
        for(int j = 0; j < T.size(); j++) {
            if(S[i + j] != T[j]) {
                changes++;
            }
        }
        
        minChanges = min(minChanges, changes);
    }
    
    cout << minChanges << endl;
    
    return 0;
}