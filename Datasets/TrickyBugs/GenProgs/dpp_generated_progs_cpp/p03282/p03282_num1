#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string transformString(string S) {
    string transformedS = "";
    for (char c : S) {
        int digit = c - '0';
        string transformedDigit(digit, c);
        transformedS += transformedDigit;
    }
    return transformedS;
}

char findKthCharacter(string S, long long K) {
    string transformedS = S;
    long long days = 5 * pow(10, 15);
    
    for (long long i = 0; i < days; i++) {
        transformedS = transformString(transformedS);
    }
    
    return transformedS[K - 1];
}

int main() {
    string S;
    long long K;
    cin >> S >> K;
    
    char KthCharacter = findKthCharacter(S, K);
    cout << KthCharacter << endl;
    
    return 0;
}