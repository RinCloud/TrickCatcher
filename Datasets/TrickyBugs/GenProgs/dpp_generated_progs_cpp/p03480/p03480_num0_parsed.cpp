#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int numOnes = 0;
    for (char ch : S) {
        if (ch == '1') {
            numOnes++;
        }
    }
    
    int K = min(numOnes, static_cast<int>(S.length()) - numOnes);
    cout << K << endl;
    
    return 0;
}