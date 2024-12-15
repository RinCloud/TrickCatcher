#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int countOfQuestionMarks = 0;
    int countOfZeroes = 0;
    int countOfOnes = 0;
    
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '0')
            countOfZeroes++;
        else if (S[i] == '1')
            countOfOnes++;
        else if (S[i] == '?')
            countOfQuestionMarks++;
    }
    
    int unbalancedness = abs(countOfZeroes - countOfOnes) + countOfQuestionMarks;
    cout << unbalancedness << endl;
    
    return 0;
}