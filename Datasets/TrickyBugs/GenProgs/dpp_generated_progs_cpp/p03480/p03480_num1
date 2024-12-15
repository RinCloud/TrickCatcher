#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int maxK = 0;
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        maxK = max(maxK, count);
    }
    
    cout << maxK << endl;
    
    return 0;
}