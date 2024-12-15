#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxDistinct = 0;

    for (int i = 1; i < n; i++) {
        set<char> distinctX;
        set<char> distinctY;

        for (int j = 0; j < i; j++) {
            distinctX.insert(s[j]);
        }

        for (int j = i; j < n; j++) {
            distinctY.insert(s[j]);
        }

        int distinct = 0;

        for (char c : distinctX) {
            if (distinctY.count(c) > 0) {
                distinct++;
            }
        }

        maxDistinct = max(maxDistinct, distinct);
    }

    cout << maxDistinct << endl;

    return 0;
}