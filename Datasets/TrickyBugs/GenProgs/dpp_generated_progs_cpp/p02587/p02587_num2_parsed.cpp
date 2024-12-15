#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    vector<long long> C(N);
    unordered_map<string, long long> costMap;

    for (int i = 0; i < N; i++) {
        cin >> S[i] >> C[i];
        costMap[S[i]] = C[i];
    }

    long long totalCost = 0;
    string oddString = "";

    for (int i = 0; i < N; i++) {
        string reverseS = S[i];
        reverse(reverseS.begin(), reverseS.end());
        if (S[i] == reverseS) {
            totalCost += C[i] / 2;
        } else if (costMap.count(reverseS) > 0) {
            totalCost += min(C[i], costMap[reverseS]);
            costMap[reverseS] = min(C[i], costMap[reverseS]);
        }

        if (isPalindrome(S[i]) && S[i] != reverseS) {
            oddString = S[i];
        }
    }

    if (oddString != "") {
        totalCost += costMap[oddString];
    }

    if (totalCost == 0 || oddString == "") {
        cout << -1;
    } else {
        cout << totalCost;
    }

    return 0;
}