#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int maxK = 0;
    int count0 = 0;
    int count1 = 0;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '0') {
            count0++;
            count1 = 0;
        } else {
            count1++;
            count0 = 0;
        }
        
        maxK = max(maxK, min(count0, count1));
    }
    
    cout << maxK << endl;
    
    return 0;
}