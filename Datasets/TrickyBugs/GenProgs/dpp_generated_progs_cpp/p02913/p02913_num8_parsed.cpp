#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int maxLen = 0;
   
    for (int len = 1; len <= N/2; len++) {
        for (int l1 = 0; l1 < N - len*2 + 1; l1++) {
            for (int l2 = l1 + len; l2 < N - len + 1; l2++) {
                bool match = true;
                for (int i = 0; i < len; i++) {
                    if (S[l1+i] != S[l2+i]) {
                        match = false;
                        break;
                    }
                }
                if (match && len > maxLen) {
                    maxLen = len;
                }
            }
        }
    }

    cout << maxLen << endl;

    return 0;
}