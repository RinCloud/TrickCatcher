#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string findLexicographicallySmallest(string S, int K) {
    int N = S.length();

    // Reverse the string and concatenate with the original string
    string T = S;
    reverse(T.begin(), T.end());

    string U = S + T;

    // Find the smallest substring of U based on the number of operations K
    int len = min(N * K, 2 * N);
    string smallestSubstr = U.substr(0, len);

    // Check if U has enough elements for K operations
    if (len < N * K) {
        int rem = (N * K - len) % N;
        smallestSubstr += S.substr(0, rem);
    }

    return smallestSubstr;
}

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    string result = findLexicographicallySmallest(S, K);
    cout << result << endl;

    return 0;
}
