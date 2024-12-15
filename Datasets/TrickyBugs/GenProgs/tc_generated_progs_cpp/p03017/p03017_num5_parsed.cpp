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
        if(S[i] == '#' && S[i+1] == '#') flag = 1;
    }
    if(C > D){
        flag = 1;
        for (int i = B - 2; i < D - 1; ++i) {
            if(S[i] == '.' && S[i+1] == '.' && S[i+2] == '.') flag = 0;
        }
    }else{
    	for (int i = B - 2; i < D - 1; ++i) {
            if(S[i] == '.' && S[i+1] == '.' && S[i+2] == '.') flag = 1;
        }
	}

    if(flag){
        cout << "No";
    }else{
        cout << "Yes";
    }
    return 0;
}
