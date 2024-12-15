#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;
    int flag = 0;
    for (int i = A - 1; i < max(C, D) - 1; ++i) {
        if(S[i] == '#' && S[i+1] == '#') flag = 1;
    }
    if(C > D){
        flag = 1;
        for (int i = B - 2; i <= D - 2; ++i) {
            if(S[i] == '.' && S[i+1] == '.' && S[i+2] == '.') flag = 0;
        }
    }
    if(flag){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}
