#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;

int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;
    int flag = 0;
    for (int i = A; i < max(C, D) - 1; ++i) {
        if (S[i] == '#' && S[i + 1] == '#')
            flag = 1;
    }
    if (C > D) {
        flag = 1;
        for (int i = B - 2; i <= D - 2; ++i) {
            if (S[i] == '.' && S[i + 1] == '.') {
                flag = 0;
                break; // added break statement to terminate the loop after finding the first empty block
            }
        }
    }
    if (flag) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    return 0;
}