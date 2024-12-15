#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int maxK = 0;
    int countZero = 0;
    int countOne = 0;
    
    for (char c : S) {
        if (c == '0') {
            countZero++;
        } else {
            countOne++;
        }
        
        maxK = max(maxK, min(countZero, countOne));
    }
    
    cout << maxK << endl;
    
    return 0;
}