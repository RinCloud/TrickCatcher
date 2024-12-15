#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int maxK = S.size();
    for (int K = 1; K <= maxK; K++) {
        bool canBeTurnedIntoZero = true;
        for (int i = 0; i < S.size(); i += K) {
            bool hasDifferentValue = false;
            for (int j = i; j < i + K && j < S.size(); j++) {
                if (S[j] != S[i]) {
                    hasDifferentValue = true;
                    break;
                }
            }
            if (hasDifferentValue) {
                canBeTurnedIntoZero = false;
                break;
            }
        }
        if (canBeTurnedIntoZero) {
            maxK = K;
        }
    }
    
    cout << maxK << endl;
    
    return 0;
}