#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string findLexicographicallySmallestString(int N, int K, string S) {
    string T = S;
    reverse(T.begin(), T.end());
    string U = S + T;
    
    // If K is larger than or equal to half the length of S, then we can reverse S to achieve the lexicographically smallest string
    if (K >= N / 2) {
        return string(S.begin(), S.begin() + (N - K));
    }
    
    string smallest = S;
    
    for (int i = 0; i <= K; i++) {
        string sub = U.substr(i, N);
        smallest = min(smallest, sub);
    }
    
    return smallest;
}

int main() {
    int N, K;
    string S;
    
    cin >> N >> K >> S;
    
    string result = findLexicographicallySmallestString(N, K, S);
    
    cout << result << endl;
    
    return 0;
}