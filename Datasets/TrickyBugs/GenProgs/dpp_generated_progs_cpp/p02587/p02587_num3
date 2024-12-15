#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<string> S(N);
    vector<long long> C(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> S[i] >> C[i];
    }
    
    long long minCost = -1;
    
    for (int mask = 1; mask < (1 << N); ++mask) {
        string palindrome;
        long long cost = 0;
        
        for (int i = 0; i < N; ++i) {
            if ((mask >> i) & 1) {
                palindrome += S[i];
                cost += C[i];
            }
        }
        
        if (isPalindrome(palindrome)) {
            if (minCost == -1 || cost < minCost) {
                minCost = cost;
            }
        }
    }
    
    cout << minCost << endl;
    
    return 0;
}