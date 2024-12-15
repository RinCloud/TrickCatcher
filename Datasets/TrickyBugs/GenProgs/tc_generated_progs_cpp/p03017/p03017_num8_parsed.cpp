#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;

int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;
    bool flag = false;
    for (int i = A - 1; i < max(C, D) - 1; ++i) {
        if(S[i] == '#' && S[i+1] == '#') flag = true;
    }
    if(C > D){
        for (int i = B - 2; i <= D - 2; ++i) {
            if(S[i] == '.' && S[i+1] == '.' && S[i+2] == '.') flag = false;
        }
    }
    if(flag){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}
