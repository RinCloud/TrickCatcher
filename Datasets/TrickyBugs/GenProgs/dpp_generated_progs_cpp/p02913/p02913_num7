#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int maxLen = 0;
    unordered_map<string, int> count;

    for (int len = 1; len <= N - 1; len++) {
        for (int i = 0; i <= N - len - 1; i++) {
            string substr = S.substr(i, len);
            count[substr]++;
            
            if (count[substr] >= 2 && len > maxLen) {
                maxLen = len;
            }
        }
    }

    cout << maxLen << endl;
    return 0;
}