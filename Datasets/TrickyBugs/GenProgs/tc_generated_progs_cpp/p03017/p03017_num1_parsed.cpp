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
    // Check for any rock present between A and B
    for (int i = A; i < B; ++i) {
        if(S[i] == '#') flag = 1;
    }
    // Check for any rock present between C and D
    for (int i = C; i < D; ++i) {
        if(S[i] == '#') flag = 1;
    }
    // Check for two consecutive rocks between C and D
    for (int i = C; i < D - 1; ++i) {
        if(S[i] == '#' && S[i+1] == '#') flag = 1;
    }
    if(flag){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}
